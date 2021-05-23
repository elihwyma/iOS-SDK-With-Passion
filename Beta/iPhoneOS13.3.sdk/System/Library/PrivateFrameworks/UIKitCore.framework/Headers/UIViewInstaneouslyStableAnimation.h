/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface UIViewInstaneouslyStableAnimation : NSObject

{
    id <UIVectorOperatable> _velocity;
    id <UIVectorOperatable> _targetValue;
}

@property (retain, nonatomic) id <UIVectorOperatable> targetValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)value;
- (id)velocity;
- (void)setVelocity:(id)arg1;
- (id)stepWithDelta:(double)arg1;
- (_Bool)isStable;
- (id)initWithTargetValue:(id)arg1 velocity:(id)arg2;

@end
