/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OITSUProgress.h>

@class NSObject, OITSUProgressContext;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUProgressContextProgress : OITSUProgress

{
    OITSUProgressContext *mProgressContext;
    NSObject<OS_dispatch_queue> *mProgressContextObserverQueue;
    _Bool hasAddedProgressContextObserver;
}

- (id)init;
- (void)dealloc;
- (double)value;
- (_Bool)isIndeterminate;
- (void)removeProgressObserver:(id)arg1;
- (double)maxValue;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithProgressContext:(id)arg1;
- (void)p_updateProgressContextObserver;
- (void)p_progressDidChange:(id)arg1;

@end
