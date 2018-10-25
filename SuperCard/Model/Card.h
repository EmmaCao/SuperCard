//
//  Card.h
//  CardMatchingGame
//
//  Created by xhand on 2018/10/19.
//  Copyright © 2018年 EmmaCao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

-(int)match:(NSArray *)otherCards;

@end

NS_ASSUME_NONNULL_END
