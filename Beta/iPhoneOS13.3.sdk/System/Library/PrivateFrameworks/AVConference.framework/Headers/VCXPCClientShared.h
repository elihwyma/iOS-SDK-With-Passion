/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/AVConferenceXPCClient.h>

@class NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCXPCClientShared : AVConferenceXPCClient

{
    NSMutableDictionary *_registeredUUIDServiceBlocks;
    NSObject<OS_dispatch_queue> *_registeredBlocksQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *registeredUUIDServiceBlocks;

- (id)init;
- (void)dealloc;
- (void)deregisterFromNotifications;
- (void)registerBlockWithUUID:(id)arg1 service:(char *)arg2 block:(CDUnknownBlockType)arg3;
- (void)deregisterWithUUID:(id)arg1 service:(char *)arg2;

@end
