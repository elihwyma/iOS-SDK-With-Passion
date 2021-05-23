/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface UIViewFrictionBounceAnimation : NSObject

{
    id _stableTarget;
    id _intermediate;
    id _current;
    double _deceleration;
    double _bounce;
    id <UIVectorOperatable> _targetValue;
}

@property (retain, nonatomic) id <UIVectorOperatable> targetValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)velocity;
- (void)setVelocity:(id)arg1;
- (id)stepWithDelta:(double)arg1;
- (_Bool)isStable;
- (id)updatedTarget;
- (id)initWithCurrent:(id)arg1 target:(id)arg2;

@end
