/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/ECLocalActionReplayer.h>

@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@interface ECTransferUndownloadedActionIMAPReplayer : ECLocalActionReplayer

{
    id <ECIMAPServerInterface> serverInterface;
    id <ECIMAPLocalActionReplayerDelegate> delegate;
}

@property (weak, nonatomic) id <ECIMAPLocalActionReplayerDelegate> delegate;
@property (retain, nonatomic) id <ECIMAPServerInterface> serverInterface;

- (id)replayAction;
- (_Bool)_moveAllMessages;
- (_Bool)_deleteUIDs:(id)arg1;
- (id)_uidIndexSet;
- (id)_copyAllMessages:(_Bool)arg1;

@end
