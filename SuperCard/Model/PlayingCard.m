//
//  PlayingCard.m
//  CardMatchingGame
//
//  Created by Emma on 2018/10/20.
//  Copyright © 2018 EmmaCao. All rights reserved.
//

#import "PlayingCard.h"

@implementation PlayingCard

-(int)match:(NSArray *)otherCards
{
    int score = 0;
    
    if ([otherCards count] == 1) {
        id card = [otherCards firstObject];
        
        if ([card isKindOfClass:[PlayingCard class]]) {
            PlayingCard *otherCard = (PlayingCard *)card;
            if ([self.suit isEqualToString:otherCard.suit]) {
                score = 1;
            }
            else if(self.rank == otherCard.rank){
                score = 4;
            }
        }
    }
    
    return score;
}

-(NSString *)contents
{
    NSArray *rankString = [PlayingCard rankString];
    return [rankString[self.rank] stringByAppendingString:self.suit];
}

//because we provide setter AND getter
@synthesize suit = _suit;

+(NSArray *)validSuits
{
    return @[@"♣️",@"♠️",@"♦️",@"♥️"];
}

-(void)setSuit:(NSString *)suit
{
    if ([[PlayingCard validSuits] containsObject:suit]) {
        _suit = suit;
    }
}

-(NSString *)suit
{
    return _suit ? _suit : @"?";
}

+(NSArray *)rankString
{
    return @[@"?",@"A",@"2",@"3",@"4",@"5",@"6",@"7",@"8",@"9",@"10",@"J",@"Q",@"K"];
}

+(NSUInteger)maxRank { return [[self rankString] count]-1; }

-(void)setRank:(NSUInteger)rank
{
    if (rank <= [PlayingCard maxRank]) {
        _rank = rank;
    }
}


@end
