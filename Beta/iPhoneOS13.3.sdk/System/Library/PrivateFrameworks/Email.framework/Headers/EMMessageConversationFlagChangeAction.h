/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMMessageChangeAction.h>

@interface EMMessageConversationFlagChangeAction : EMMessageChangeAction

{
    long long _conversationNotificationLevel;
    long long _originalConversationNotificationLevel;
    long long _conversationID;
}

@property (nonatomic, readonly) long long conversationNotificationLevel;
@property (nonatomic, readonly) long long originalConversationNotificationLevel;
@property long long conversationID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)signpostType;
- (id)initWithConversationID:(long long)arg1 conversationNotificationLevel:(long long)arg2 originalConversationNotificationLevel:(long long)arg3;
- (id)initWithMessage:(id)arg1 conversationNotificationLevel:(long long)arg2;

@end
