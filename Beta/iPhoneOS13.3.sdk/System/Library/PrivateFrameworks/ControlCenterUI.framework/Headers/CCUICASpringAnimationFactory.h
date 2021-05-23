/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

@class CCUICASpringAnimationParameters, NSString;

@interface CCUICASpringAnimationFactory : NSObject

{
    CCUICASpringAnimationParameters *_parameters;
    double _speed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double animationDuration;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (_Bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_animation;
- (id)initWithParameters:(id)arg1 speed:(double)arg2;

@end
