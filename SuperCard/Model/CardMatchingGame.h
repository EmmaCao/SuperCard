//
//  CardMatchingGame.h
//  CardMatchingGame
//
//  Created by Emma on 2018/10/21.
//  Copyright © 2018 EmmaCao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"

NS_ASSUME_NONNULL_BEGIN

@interface CardMatchingGame : NSObject

// designated initializer
-(instancetype)initWithCardCount:(NSUInteger)count usingDeck:(Deck *)deck;

-(void)chooseCardAtIndex:(NSUInteger)index;
-(Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic, readonly) NSInteger score;

@end

NS_ASSUME_NONNULL_END
