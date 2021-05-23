/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface TSUProgress : NSObject

{
    NSMutableSet *mProgressObservers;
    NSObject<OS_dispatch_queue> *mProgressObserversQueue;
    NSString *mMessage;
}

@property (readonly) double value;
@property (readonly) double maxValue;
@property (readonly, getter=isIndeterminate) _Bool indeterminate;
@property (copy) NSString *message;

- (id)init;
- (void)dealloc;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)protected_progressDidChange;
- (_Bool)protected_hasProgressObservers;
- (double)protected_minProgressObserverValueInterval;

@end
