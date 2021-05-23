/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDAssetDownloadScheduler, NSString;

@protocol OS_xpc_object;

@interface _EDAssetDownloadSchedulerContinuation : NSObject

{
    EDAssetDownloadScheduler *_scheduler;
    NSObject<OS_xpc_object> *_activity;
}

@property (weak, nonatomic) EDAssetDownloadScheduler *scheduler;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)rescheduleAfterSuccess;
- (void)rescheduleAfterFailure;
- (void)stopScheduling;

@end
