/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSString, NSXPCConnection;

@protocol BYBuddyDaemonProximitySourceProtocol;

@interface BYBuddyDaemonProximitySourceClient : NSObject

{
    id <BYBuddyDaemonProximitySourceProtocol> _delegate;
    NSXPCConnection *_connection;
}

@property (retain) NSXPCConnection *connection;
@property (weak) id <BYBuddyDaemonProximitySourceProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)proximitySourceClientInterface;

- (id)init;
- (void)invalidate;
- (void)receivedData:(id)arg1;
- (void)connectToDaemon;
- (void)syncProgress:(double)arg1;
- (void)syncCompletedWithErrors:(id)arg1;
- (void)activateWithSharingChannel:(id)arg1;
- (void)finishedWithError:(id)arg1;
- (void)backupProgress:(double)arg1 estimatedTimeRemaining:(long long)arg2;
- (void)backupCompletedWithError:(id)arg1;

@end
