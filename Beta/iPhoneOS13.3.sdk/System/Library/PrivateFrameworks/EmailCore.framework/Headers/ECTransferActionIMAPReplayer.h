/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/ECTransferActionReplayer.h>

@class NSString;

@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@interface ECTransferActionIMAPReplayer : ECTransferActionReplayer

{
    id <ECIMAPServerInterface> serverInterface;
    id <ECIMAPLocalActionReplayerDelegate> delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <ECIMAPLocalActionReplayerDelegate> delegate;
@property (retain, nonatomic) id <ECIMAPServerInterface> serverInterface;

- (_Bool)isRecoverableError:(id)arg1;
- (id)fetchBodyDataForRemoteID:(id)arg1 mailboxURL:(id)arg2;
- (_Bool)downloadFailed;
- (id)copyItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (id)moveItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (id)appendItem:(id)arg1 mailboxURL:(id)arg2;
- (_Bool)deleteSourceMessagesFromTransferItems:(id)arg1;
- (id)_transferItems:(id)arg1 destinationMailboxURL:(id)arg2 isMove:(_Bool)arg3;

@end
