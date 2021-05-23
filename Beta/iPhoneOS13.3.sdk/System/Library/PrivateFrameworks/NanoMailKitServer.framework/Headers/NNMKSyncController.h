/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@protocol NNMKDeviceRegistryHolder;

@interface NNMKSyncController : NSObject

{
    id <NNMKDeviceRegistryHolder> _delegate;
}

@property (weak, nonatomic) id <NNMKDeviceRegistryHolder> delegate;

- (id)mailboxWithId:(id)arg1;
- (id)deviceRegistry;
- (id)watchMessageIdFromMessageId:(id)arg1;
- (_Bool)canSyncMailbox:(id)arg1;
- (id)filterMessages:(id)arg1 byAlreadySynced:(_Bool)arg2 byMailbox:(id)arg3;
- (id)filterMessages:(id)arg1 receivedBeforeDate:(id)arg2;
- (_Bool)shouldAddsDeletesMessagesByStatusUpdatesForMailbox:(id)arg1;
- (_Bool)isValidMessageStatus:(unsigned long long)arg1 forMailbox:(id)arg2;
- (_Bool)canSyncMessage:(id)arg1 forMailbox:(id)arg2;
- (id)watchAttachmentContentIdFromContentId:(id)arg1;
- (_Bool)_validateMessage:(id)arg1;
- (_Bool)isMessage:(id)arg1 fromMailbox:(id)arg2;
- (id)groupMessagesByMailboxId:(id)arg1;
- (id)removeInvalidMailboxesFromMailboxSelection:(id)arg1;
- (_Bool)doesMessageBelongToSyncedMailboxes:(id)arg1;
- (id)messageIdFromWatchMessageId:(id)arg1;
- (id)mailboxesToSync;
- (void)groupMessagesByMailbox:(id)arg1 mailboxes:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)mailboxForMessageWithId:(id)arg1;

@end
