/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailCore/ECTransferActionReplayer.h>

@class MFDAMessageStore, NSString;

@interface MFDATransferActionReplayer : ECTransferActionReplayer

{
    MFDAMessageStore *_store;
}

@property (retain, nonatomic) MFDAMessageStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)replayActionUsingStore:(id)arg1;
- (_Bool)isRecoverableError:(id)arg1;
- (id)fetchBodyDataForRemoteID:(id)arg1 mailboxURL:(id)arg2;
- (_Bool)downloadFailed;
- (id)copyItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (id)moveItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (id)appendItem:(id)arg1 mailboxURL:(id)arg2;
- (_Bool)deleteSourceMessagesFromTransferItems:(id)arg1;

@end
