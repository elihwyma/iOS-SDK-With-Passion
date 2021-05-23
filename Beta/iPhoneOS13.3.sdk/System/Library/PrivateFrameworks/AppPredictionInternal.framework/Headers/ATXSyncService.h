/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXSyncDelegate, SYService;

@interface ATXSyncService : NSObject

{
    SYService *_service;
    ATXSyncDelegate *_serviceDelegate;
}

@property (nonatomic, readonly) SYService *service;
@property (nonatomic, readonly) ATXSyncDelegate *serviceDelegate;

+ (id)sharedSyncService;

- (id)_init;
- (void)resumeSync;
- (void)sendData:(id)arg1 options:(struct NSDictionary *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)attemptSync;
- (void)handleResultsSyncData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
