/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFOutgoingRichtextMessageContent.h>

@class NSString;

@interface MFOutgoingMultipartRelatedContent : MFOutgoingRichtextMessageContent

{
    NSString *_htmlBody;
}

@property (retain, nonatomic) NSString *htmlBody;

- (id)copy;
- (id)multipartContent;

@end
