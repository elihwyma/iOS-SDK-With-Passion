/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface WBSCloudHistoryPushAgentProxy : NSObject

{
    NSXPCConnection *_agentConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)clearAcknowledgedPushNotifications;
- (void)acknowledgePendingPushNotifications;
- (void)getPushNotifications:(CDUnknownBlockType)arg1;
- (void)queryMemoryFootprint:(CDUnknownBlockType)arg1;
- (id)queryMemoryFootprintWithError:(id *)arg1;

@end
