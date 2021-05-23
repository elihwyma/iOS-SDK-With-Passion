/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UITouchForceObservationMessageReader;

__attribute__((visibility("hidden")))
@interface _UITouchForceMessage : NSObject

{
    _Bool _isReset;
    _UITouchForceObservationMessageReader *_observeReader;
    _Bool _shouldFilterDueToSystemGestures;
    double _unclampedTouchForce;
    double _maximumPossibleForce;
    double _timestamp;
    struct CGPoint _centroid;
}

@property (nonatomic) double unclampedTouchForce;
@property (nonatomic) double maximumPossibleForce;
@property (nonatomic) double timestamp;
@property (nonatomic) struct CGPoint centroid;
@property (nonatomic) _Bool shouldFilterDueToSystemGestures;

+ (id)reset;
+ (id)observe:(CDUnknownBlockType)arg1;

- (void)ifObservation:(CDUnknownBlockType)arg1 ifReset:(CDUnknownBlockType)arg2;
- (void)ifObservationUnclamped:(CDUnknownBlockType)arg1 ifReset:(CDUnknownBlockType)arg2;

@end
