/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OITSUProgress.h>

@class NSArray, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUProgressGroup : OITSUProgress

{
    NSArray *mChildren;
    NSArray *mChildrenProgressObservers;
    NSObject<OS_dispatch_queue> *mChildrenProgressObserversQueue;
}

- (void)dealloc;
- (double)value;
- (_Bool)isIndeterminate;
- (void)removeProgressObserver:(id)arg1;
- (double)maxValue;
- (id)initWithChildren:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)p_updateChildrenProgressObservers;

@end
