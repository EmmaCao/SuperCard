//
//  Deck.h
//  CardMatchingGame
//
//  Created by xhand on 2018/10/19.
//  Copyright © 2018年 EmmaCao. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Card.h"

NS_ASSUME_NONNULL_BEGIN

@interface Deck : NSObject

-(void)addCard:(Card *)card atTop:(BOOL)atTop;
-(void)addCard:(Card *)card;

-(Card *)drawRandomCard;

@end

NS_ASSUME_NONNULL_END
