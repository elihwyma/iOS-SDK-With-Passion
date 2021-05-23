/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class DeliveryAccount, ECHTMLStringAndMIMECharset, MFAttachmentCompositionContext, MFMailDelivery, MFMailMessage, MFMutableMessageHeaders, MFPlainTextDocument, MailAccount, NSArray, NSDictionary;

@protocol MFDeliveryDelegate;

@interface MFOutgoingMessageDelivery : NSObject

{
    MFMailMessage *_message;
    MFMutableMessageHeaders *_headers;
    NSArray *_mixedContent;
    _Bool _textPartsAreHTML;
    ECHTMLStringAndMIMECharset *_htmlBody;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherHTMLAndAttachments;
    MailAccount *_archiveAccount;
    DeliveryAccount *_deliveryAccount;
    NSDictionary *_compositionSpecification;
    MFMailDelivery *_currentDeliveryObject;
    _Bool _isUserRequested;
    _Bool _shouldSign;
    _Bool _shouldEncrypt;
    id <MFDeliveryDelegate> _delegate;
    MFAttachmentCompositionContext *_attachmentContext;
    unsigned long long _conversationFlags;
    MFMailMessage *_originalMessage;
    long long _originalConversationId;
    long long _action;
}

@property (weak, nonatomic) id <MFDeliveryDelegate> delegate;
@property (retain, nonatomic) MFAttachmentCompositionContext *attachmentContext;
@property (retain, nonatomic) NSDictionary *compositionSpecification;
@property (nonatomic) unsigned long long conversationFlags;
@property (retain, nonatomic) MFMailMessage *originalMessage;
@property (nonatomic) long long originalConversationId;
@property (nonatomic) _Bool isUserRequested;
@property (nonatomic) long long action;
@property (nonatomic) _Bool shouldSign;
@property (nonatomic) _Bool shouldEncrypt;

+ (id)newWithMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;

- (id)init;
- (id)message;
- (id)account;
- (void)setAccount:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (id)originalHeaders;
- (void)setArchiveAccount:(id)arg1;
- (long long)deliveryStatus;
- (id)originalMessageObjectID;
- (id)deliverSynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (id)_currentDeliveryObject;
- (id)_deliverSynchronouslyWithCurrentSettings:(_Bool)arg1;
- (id)_deliveryAccountForInitializers;

@end
