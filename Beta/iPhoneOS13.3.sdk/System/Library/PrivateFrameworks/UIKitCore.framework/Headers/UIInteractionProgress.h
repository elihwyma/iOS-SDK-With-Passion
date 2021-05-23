/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSPointerArray;

@interface UIInteractionProgress : NSObject

{
    NSPointerArray *_observers;
    double _previousPercentComplete;
    double _previousUpdateTime;
    double _mostRecentUpdateTime;
    long long _atLeastTwoUpdates;
    double _percentComplete;
}

@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) double velocity;

- (id)init;
- (id)description;
- (void)addProgressObserver:(id)arg1;
- (void)removeProgressObserver:(id)arg1;
- (void)endInteraction:(_Bool)arg1;
- (void)setPercentComplete:(double)arg1;
- (unsigned long long)_indexOfObserver:(id)arg1;
- (void)endInteraction:(_Bool)arg1 finalVelocity:(double)arg2;
- (long long)numberOfObservers;

@end
