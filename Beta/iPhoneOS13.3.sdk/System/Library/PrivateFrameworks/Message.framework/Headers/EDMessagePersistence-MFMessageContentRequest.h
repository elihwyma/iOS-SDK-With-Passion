/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailDaemon/EDMessagePersistence.h>

@interface EDMessagePersistence (MFMessageContentRequest)

- (_Bool)isMessageKnownToHaveNoMailDropAttachment:(id)arg1;
- (void)setIsMailDropAttachmentPresent:(_Bool)arg1 forMessage:(id)arg2;

@end
