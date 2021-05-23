/*
 Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol ConnectionProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface APConnectionNotifier : NSObject

{
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_underlyingRemoteConnection;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSXPCConnection *underlyingRemoteConnection;
@property (nonatomic, readonly) id <ConnectionProtocol> remoteObjectProxy;

+ (id)sharedNotifier;

- (id)init;
- (id)_remoteConnection;
- (id)_newRemoteConnection;

@end
