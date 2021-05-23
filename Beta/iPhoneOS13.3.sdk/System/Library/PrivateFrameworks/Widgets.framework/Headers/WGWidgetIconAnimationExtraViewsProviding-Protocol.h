/*
 Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

#import <Widgets/Swift-Protocol.h>

@class NSArray, UIView;

@protocol WGWidgetIconAnimationExtraViewsProviding <Swift>

@property (nonatomic, readonly) UIView *extraViewsContainer;
@property (copy, nonatomic, readonly) NSArray *extraViews;
@property (nonatomic, readonly) _Bool shouldAnimateLastTwoViewsAsOne;
@property (nonatomic, readonly) _Bool shouldAnimateFirstTwoViewsAsOne;

@end
