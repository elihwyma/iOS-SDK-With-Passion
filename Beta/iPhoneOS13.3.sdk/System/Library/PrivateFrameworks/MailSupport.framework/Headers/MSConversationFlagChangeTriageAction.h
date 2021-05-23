/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <MailSupport/MSFlagChangeTriageAction.h>

@class EMMessage;

@interface MSConversationFlagChangeTriageAction : MSFlagChangeTriageAction

@property (nonatomic, readonly) EMMessage *referenceMessage;

+ (long long)conversationNotificationLevel;

- (id)messageFlags;
- (id)_changeAction;
- (id)initWithReferenceMessage:(id)arg1 delegate:(id)arg2 reason:(long long)arg3;
- (void)_toggleFlagWithBuilder:(id)arg1;

@end
