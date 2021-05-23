/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <MailSupport/MSTriageAction.h>

@class ECMessageFlagChange, EMMailbox;

@interface MSMoveTriageAction : MSTriageAction

{
    EMMailbox *_destinationMailbox;
    long long _destinationMailboxType;
    ECMessageFlagChange *_flagChange;
    _Bool _copyMessages;
}

- (id)_changeAction;
- (id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 destinationMailboxType:(long long)arg3 flagChange:(id)arg4 copyMessages:(_Bool)arg5;
- (id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 destinationMailbox:(id)arg3 flagChange:(id)arg4 copyMessages:(_Bool)arg5;

@end
