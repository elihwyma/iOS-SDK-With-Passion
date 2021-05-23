/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface UIViewUpdateVelocityAnimationDescription : NSObject

{
    id <UIVectorOperatable> _velocity;
    id <UIVectorOperatable> _targetVelocity;
}

@property (retain, nonatomic) id <UIVectorOperatable> velocity;
@property (retain, nonatomic) id <UIVectorOperatable> targetVelocity;

+ (id)descriptionWithVelocity:(id)arg1 targetVelocity:(id)arg2;

- (id)initWithVelocity:(id)arg1 targetVelocity:(id)arg2;

@end
