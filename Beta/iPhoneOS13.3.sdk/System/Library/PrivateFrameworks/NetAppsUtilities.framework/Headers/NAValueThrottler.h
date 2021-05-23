/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol NACancelable, NAScheduler;

@interface NAValueThrottler : NSObject

{
    double _throttleInterval;
    id <NAScheduler> _updateScheduler;
    id _value;
    NSMutableSet *_observerBlocks;
    id <NACancelable> _valueUpdateCancelationToken;
}

@property (nonatomic, readonly) NSMutableSet *observerBlocks;
@property (retain, nonatomic) id <NACancelable> valueUpdateCancelationToken;
@property (nonatomic, readonly) double throttleInterval;
@property (retain, nonatomic) id <NAScheduler> updateScheduler;
@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) _Bool hasPendingValueChange;

- (id)init;
- (void)dealloc;
- (void)setValue:(id)arg1;
- (id)initWithThrottleInterval:(double)arg1 initialValue:(id)arg2;
- (id)initWithThrottleInterval:(double)arg1;
- (void)_enqueueValueUpdateIfNecessary;
- (void)_notifyObserversOfValueUpdate;
- (id)observeValueChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)flushValueChanges;
- (void)setValue:(id)arg1 notifyObservers:(_Bool)arg2;

@end
