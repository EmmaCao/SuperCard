//
//  Card.m
//  CardMatchingGame
//
//  Created by xhand on 2018/10/19.
//  Copyright © 2018年 EmmaCao. All rights reserved.
//

#import "Card.h"

@implementation Card

-(int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    
    return score;
}

@end
