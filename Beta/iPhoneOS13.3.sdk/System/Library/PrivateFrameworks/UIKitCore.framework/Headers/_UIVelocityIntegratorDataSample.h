/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIVelocityIntegratorDataSample : NSObject

{
    double _timestamp;
    struct CGVector _translation;
    struct CGPoint _point;
}

@property (nonatomic) double timestamp;
@property (nonatomic) struct CGVector translation;
@property (nonatomic) struct CGPoint point;

- (id)description;
- (_Bool)isSampleDistinctEnoughFromTouchLocation:(struct CGPoint)arg1 minimumRequiredMovement:(double)arg2;
- (void)updateTimeToNow;

@end
