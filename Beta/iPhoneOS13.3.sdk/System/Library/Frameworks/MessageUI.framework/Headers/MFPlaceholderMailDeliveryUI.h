/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Message/MFOutgoingMessageDelivery.h>

@class MFPlaceholderMessageRewriter, NSString;

@interface MFPlaceholderMailDeliveryUI : MFOutgoingMessageDelivery

{
    NSString *_contextID;
    MFPlaceholderMessageRewriter *_rewriter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithMessage:(id)arg1;
- (id)deliverSynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (id)contentForURL:(id)arg1;
- (id)contentForContentID:(id)arg1;
- (id)contentForPlaceholder:(id)arg1;
- (id)_attachmentsContextID;

@end
