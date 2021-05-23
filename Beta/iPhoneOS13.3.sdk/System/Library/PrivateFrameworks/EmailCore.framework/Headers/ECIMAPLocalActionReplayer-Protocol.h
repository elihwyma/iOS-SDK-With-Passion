/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@protocol ECIMAPLocalActionReplayer

@property (weak, nonatomic) id <ECIMAPLocalActionReplayerDelegate> delegate;
@property (retain, nonatomic) id <ECIMAPServerInterface> serverInterface;

@end
