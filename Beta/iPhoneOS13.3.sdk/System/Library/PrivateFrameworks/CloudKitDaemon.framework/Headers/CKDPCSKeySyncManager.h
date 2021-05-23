/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDPCSKeySyncManager : NSObject

{
    NSMutableDictionary *_keySyncTrackerByServiceName;
    NSObject<OS_dispatch_queue> *_keySyncQueue;
}

@property (retain, nonatomic) NSMutableDictionary *keySyncTrackerByServiceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *keySyncQueue;

+ (id)sharedManager;

- (id)init;
- (void)syncUserKeysForService:(id)arg1 serviceIsManatee:(_Bool)arg2 account:(id)arg3 shouldThrottle:(_Bool)arg4 testOverrideProvider:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)createSyncTrackerForService:(id)arg1 manatee:(_Bool)arg2;
- (id)syncTrackerForService:(id)arg1 manatee:(_Bool)arg2 shortThrottlePeriod:(_Bool)arg3;
- (void)performKeySyncWithSyncTracker:(id)arg1 testableSyncConfig:(unsigned long long)arg2 shouldThrottle:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
