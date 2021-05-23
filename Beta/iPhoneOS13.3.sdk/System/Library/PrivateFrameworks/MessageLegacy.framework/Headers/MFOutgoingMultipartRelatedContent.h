/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <MessageLegacy/MFOutgoingRichtextMessageContent.h>

@class NSString;

@interface MFOutgoingMultipartRelatedContent : MFOutgoingRichtextMessageContent

{
    NSString *_htmlBody;
}

@property (retain, nonatomic) NSString *htmlBody;

- (void)dealloc;
- (id)copy;
- (id)multipartContent;

@end
