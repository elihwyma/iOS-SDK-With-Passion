/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class GEOLocationShifter;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FMLocationShifter : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    GEOLocationShifter *_locationShifter;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) GEOLocationShifter *locationShifter;

- (id)init;
- (void)shiftLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (_Bool)isLocationShiftRequiredForItem:(id)arg1;
- (_Bool)isLocationShiftRequiredForItems:(id)arg1;
- (void)shiftLocations:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (id)shiftLocation:(id)arg1 timeout:(double)arg2;
- (id)shiftLocations:(id)arg1 timeout:(double)arg2;

@end
