/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Message/MFMailDropMailDelivery.h>

@class MFPlaceholderMessageRewriter, NSString;

@interface MFMailDropMailDeliveryUI : MFMailDropMailDelivery

{
    MFPlaceholderMessageRewriter *_rewriter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)deliverSynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (id)scaledImages:(id)arg1;
- (_Bool)updateMessageWithAttachmentsSynchronously;
- (id)_scaleImages:(id)arg1 toFit:(unsigned long long)arg2 resultingSize:(out unsigned long long *)arg3;
- (id)_mailDropAttachmentHTMLStringForAttachment:(id)arg1;
- (id)_contentForAttachmentPassingTest:(CDUnknownBlockType)arg1;
- (id)_headersByAddingMailDropHeaders:(id)arg1;
- (id)_mailDropBannerHTMLString;
- (id)contentForURL:(id)arg1;
- (id)contentForContentID:(id)arg1;
- (id)contentForPlaceholder:(id)arg1;

@end
