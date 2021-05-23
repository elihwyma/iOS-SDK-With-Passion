/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <EmailCore/ECLocalActionReplayer.h>

@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@interface ECIMAPFlagChangeUndownloadedActionReplayer : ECLocalActionReplayer

{
    id <ECIMAPServerInterface> serverInterface;
    id <ECIMAPLocalActionReplayerDelegate> delegate;
}

@property (weak, nonatomic) id <ECIMAPLocalActionReplayerDelegate> delegate;
@property (retain, nonatomic) id <ECIMAPServerInterface> serverInterface;

- (id)replayAction;

@end
