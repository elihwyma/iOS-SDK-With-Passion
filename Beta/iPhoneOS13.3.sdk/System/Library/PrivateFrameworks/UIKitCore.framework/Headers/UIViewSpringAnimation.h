/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface UIViewSpringAnimation : NSObject

{
    id <UIVectorOperatable> _current;
    id <UIVectorOperatable> _velocity;
    id <UIVectorOperatable> _zero;
    CDStruct_289c5ec3 _state;
    CDStruct_9e265dec _parameters;
    id <UIVectorOperatable> _distance;
    id <UIVectorOperatable> _scaledVelocity;
    id <UIVectorOperatable> _epsilon;
    float _velocityScalingFactor;
    _Bool _parametersInitialized;
    id <UIVectorOperatable> _targetValue;
    id <UIVectorOperatable> _value;
    id <UIVectorOperatable> _intermediate;
    id <UIVectorOperatable> _intermediateVelocity;
}

@property (retain, nonatomic) id <UIVectorOperatable> targetValue;
@property (retain, nonatomic) id <UIVectorOperatable> velocity;
@property (retain, nonatomic) id <UIVectorOperatable> value;
@property (retain, nonatomic) id <UIVectorOperatable> intermediate;
@property (retain, nonatomic) id <UIVectorOperatable> intermediateVelocity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateWithDescription:(id)arg1 initial:(_Bool)arg2;
- (id)initWithDescription:(id)arg1 current:(id)arg2 targetValue:(id)arg3;
- (id)stepWithDelta:(double)arg1;
- (_Bool)isStable;
- (void)updateWithDescription:(id)arg1;
- (id)initWithCurrent:(id)arg1 targetValue:(id)arg2;

@end
