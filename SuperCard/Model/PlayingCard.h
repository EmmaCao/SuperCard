//
//  PlayingCard.h
//  CardMatchingGame
//
//  Created by Emma on 2018/10/20.
//  Copyright © 2018 EmmaCao. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

/** 花色，例如红桃，黑桃，梅花，方块 */
@property (strong, nonatomic) NSString *suit;
/** 分数 A-K */
@property (nonatomic) NSUInteger rank;

+(NSArray *)validSuits;
+(NSUInteger)maxRank;

@end
