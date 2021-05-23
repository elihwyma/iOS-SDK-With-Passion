/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXComponentBehavior, SXComponentView, UIView;

@interface SXComponentBehaviorHandler : NSObject

{
    _Bool _isSetup;
    SXComponentView *_componentView;
    SXComponentBehavior *_behavior;
}

@property (nonatomic, readonly) SXComponentView *componentView;
@property (nonatomic, readonly) SXComponentBehavior *behavior;
@property (nonatomic, readonly) UIView *behaviorView;
@property (nonatomic, readonly) _Bool isSetup;
@property (nonatomic, readonly) _Bool requiresContinuousUpdates;

- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;
- (void)setupWithBehaviorController:(id)arg1;
- (void)updateWithBehaviorController:(id)arg1;
- (void)destroyWithBehaviorController:(id)arg1;

@end
