/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSString, NSXPCConnection;

@protocol BYClientDaemonCloudSyncProtocol;

@interface BYBuddyDaemonCloudSyncClient : NSObject

{
    _Bool _syncDidStart;
    _Bool _syncDidComplete;
    id <BYClientDaemonCloudSyncProtocol> _delegate;
    NSXPCConnection *_connection;
}

@property (retain) NSXPCConnection *connection;
@property (nonatomic) _Bool syncDidStart;
@property (nonatomic) _Bool syncDidComplete;
@property (weak) id <BYClientDaemonCloudSyncProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientInterface;

- (id)init;
- (void)connectToDaemon;
- (void)syncProgress:(double)arg1;
- (void)syncCompletedWithErrors:(id)arg1;
- (void)needsToSync:(CDUnknownBlockType)arg1;
- (void)isSyncInProgress:(CDUnknownBlockType)arg1;
- (void)startSync;
- (void)cancelSync;
- (void)fetchCurrentSyncState:(CDUnknownBlockType)arg1;
- (void)cloudSyncProgressUpdate:(long long)arg1 completedClients:(long long)arg2 errors:(id)arg3;

@end
