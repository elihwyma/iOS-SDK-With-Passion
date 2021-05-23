/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/Swift-Protocol.h>

@class NSArray, UIView;

@protocol WGWidgetIconAnimationExtraViewsProviding <Swift>

@property (nonatomic, readonly) UIView *extraViewsContainer;
@property (copy, nonatomic, readonly) NSArray *extraViews;
@property (nonatomic, readonly) _Bool shouldAnimateLastTwoViewsAsOne;
@property (nonatomic, readonly) _Bool shouldAnimateFirstTwoViewsAsOne;

@end
