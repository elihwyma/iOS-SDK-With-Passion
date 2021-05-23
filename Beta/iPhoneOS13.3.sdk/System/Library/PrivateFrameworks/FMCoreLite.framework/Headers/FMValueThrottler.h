/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol FMCancelable, FMScheduler;

@interface FMValueThrottler : NSObject

{
    double _throttleInterval;
    id <FMScheduler> _updateScheduler;
    id _value;
    NSMutableSet *_observerBlocks;
    id <FMCancelable> _valueUpdateCancelationToken;
}

@property (nonatomic, readonly) NSMutableSet *observerBlocks;
@property (retain, nonatomic) id <FMCancelable> valueUpdateCancelationToken;
@property (nonatomic, readonly) double throttleInterval;
@property (retain, nonatomic) id <FMScheduler> updateScheduler;
@property (retain, nonatomic) id value;
@property (nonatomic, readonly) _Bool hasPendingValueChange;

- (id)init;
- (void)dealloc;
- (id)initWithThrottleInterval:(double)arg1 initialValue:(id)arg2;
- (id)initWithThrottleInterval:(double)arg1;
- (void)_enqueueValueUpdateIfNecessary;
- (void)_notifyObserversOfValueUpdate;
- (id)observeValueChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)flushValueChanges;

@end
