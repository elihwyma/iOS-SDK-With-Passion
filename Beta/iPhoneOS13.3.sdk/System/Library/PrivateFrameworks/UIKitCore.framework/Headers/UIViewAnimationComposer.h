/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface UIViewAnimationComposer : NSObject

{
    double _previousInteractiveUpdateTimestamp;
    id _previousInteractiveUpdateValue;
    id <UIVectorOperatable> _previousTarget;
    _Bool _interactive;
    id <UIVectorOperatable> _targetVelocity;
}

@property (retain, nonatomic) id <UIVectorOperatable> targetVelocity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isActive;
- (id)composeAnimation:(id)arg1 withNewAnimationDescription:(id)arg2 interactive:(_Bool)arg3 currentValue:(id)arg4 targetValue:(id)arg5;
- (id)projectValue:(id)arg1 decelerationFactor:(double)arg2;
- (id)createAnimationFromDescription:(id)arg1 currentValue:(id)arg2 velocity:(id)arg3 targetValue:(id)arg4;

@end
