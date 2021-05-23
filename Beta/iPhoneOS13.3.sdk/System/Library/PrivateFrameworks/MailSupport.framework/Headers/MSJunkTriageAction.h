/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <MailSupport/MSMoveTriageAction.h>

@interface MSJunkTriageAction : MSMoveTriageAction

@property (nonatomic, readonly) _Bool hasNonJunkMessages;

+ (_Bool)hasNonJunkMessagesInSelection:(id)arg1;

- (id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2;

@end
