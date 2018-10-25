//
//  PlayingCardView.h
//  SuperCard
//
//  Created by xhand on 2018/10/25.
//  Copyright © 2018年 EmmaCao. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) BOOL faceUp;

-(void)pinch:(UIPinchGestureRecognizer *)gesture;

@end

NS_ASSUME_NONNULL_END
