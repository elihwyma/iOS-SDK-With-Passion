/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUProgress : NSObject

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
