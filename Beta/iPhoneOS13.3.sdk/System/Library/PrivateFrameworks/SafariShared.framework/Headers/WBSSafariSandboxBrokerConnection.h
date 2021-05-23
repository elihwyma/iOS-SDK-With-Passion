/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface WBSSafariSandboxBrokerConnection : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)loadLinkPresentationMetdataForMessageWithGUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_connectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)ensureConnected:(CDUnknownBlockType)arg1;

@end
