/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OITSUProgress.h>

@class NSObject, OITSUScaledProgressStorage;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUScaledProgress : OITSUProgress

{
    OITSUScaledProgressStorage *mStorage;
    OITSUProgress *mProgress;
    id mProgressObserver;
    NSObject<OS_dispatch_queue> *mProgressQueue;
}

@property (retain) OITSUProgress *progress;
@property double maxValue;

- (id)init;
- (void)dealloc;
- (double)value;
- (_Bool)isIndeterminate;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)p_removeProgressObserverFromProgressInQueue;
- (void)p_addProgressObserverToProgressInQueue;

@end
