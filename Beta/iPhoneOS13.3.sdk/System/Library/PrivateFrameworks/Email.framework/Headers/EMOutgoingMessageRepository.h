/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class EMRemoteConnection, NSString;

@interface EMOutgoingMessageRepository : NSObject

{
    EMRemoteConnection *_connection;
}

@property (retain) EMRemoteConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)remoteInterface;
+ (id)signpostLog;

- (unsigned long long)signpostID;
- (_Bool)isProcessing;
- (id)initWithRemoteConnection:(id)arg1;
- (void)suspendDeliveryQueue;
- (void)resumeDeliveryQueue;
- (void)processAllQueuedMessages;
- (id)saveDraftMessage:(id)arg1 mailboxObjectID:(id)arg2 previousDraftObjectID:(id)arg3;
- (void)deleteDraftsInMailbox:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3;
- (id)deliverMessage:(id)arg1 usingMailDrop:(_Bool)arg2;
- (_Bool)outboxContainsMessageFromAccount:(id)arg1;
- (unsigned long long)numberOfPendingMessages;

@end
