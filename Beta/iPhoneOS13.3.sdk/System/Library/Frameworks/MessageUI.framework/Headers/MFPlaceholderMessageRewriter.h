/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class MFOutgoingMessageContent, NSMutableArray, NSString;

@protocol MFMessageRewriterPlaceholderResolver;

@interface MFPlaceholderMessageRewriter : NSObject

{
    NSMutableArray *_placeholders;
    MFOutgoingMessageContent *_originalMessageContent;
    MFOutgoingMessageContent *_rewrittenMessageContent;
    id <MFMessageRewriterPlaceholderResolver> _placeholderResolver;
}

@property (nonatomic, readonly) MFOutgoingMessageContent *originalMessageContent;
@property (weak, nonatomic) id <MFMessageRewriterPlaceholderResolver> placeholderResolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_deriveOutgoingMessageContentFromLibraryMessageContent:(id)arg1;

- (id)init;
- (id)attachments;
- (id)subject;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (id)toRecipients;
- (id)ccRecipients;
- (id)bccRecipients;
- (void)setCcRecipients:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (id)composeWebView;
- (id)sendingEmailAddress;
- (id)savedHeaders;
- (id)accountProxyGenerator;
- (void)setSendingEmailAddress:(id)arg1;
- (void)setSavedHeaders:(id)arg1;
- (id)shouldCreateRichTextRepresentation;
- (id)sendingAccountProxy;
- (id)rewrittenMessageContent;
- (id)initWithOriginalMessageContent:(id)arg1 resolver:(id)arg2;

@end
