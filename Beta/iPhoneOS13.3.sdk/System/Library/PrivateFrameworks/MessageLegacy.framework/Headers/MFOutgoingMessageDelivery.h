/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class DeliveryAccount, MFAttachmentCompositionContext, MFMailDelivery, MFMessage, MFMutableMessageHeaders, MFPlainTextDocument, MailAccount, NSArray, NSDictionary, NSString;

@protocol MFDeliveryDelegate;

@interface MFOutgoingMessageDelivery : NSObject

{
    MFMessage *_message;
    MFMutableMessageHeaders *_headers;
    NSArray *_mixedContent;
    _Bool _textPartsAreHTML;
    NSString *_htmlBody;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherHTMLAndAttachments;
    NSArray *_charsets;
    id <MFDeliveryDelegate> _delegate;
    MailAccount *_archiveAccount;
    DeliveryAccount *_deliveryAccount;
    NSDictionary *_compositionSpecification;
    MFMailDelivery *_currentDeliveryObject;
    _Bool _isUserRequested;
    MFAttachmentCompositionContext *_attachmentContext;
    unsigned long long _conversationFlags;
    long long _originalConversationId;
}

@property (retain, nonatomic) MFAttachmentCompositionContext *attachmentContext;
@property (retain, nonatomic) NSDictionary *compositionSpecification;
@property (nonatomic) unsigned long long conversationFlags;
@property (nonatomic) long long originalConversationId;
@property (nonatomic) _Bool isUserRequested;

+ (id)newWithMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)message;
- (id)account;
- (void)setAccount:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
- (id)originalHeaders;
- (void)setArchiveAccount:(id)arg1;
- (long long)deliveryStatus;
- (id)deliverSynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (id)_currentDeliveryObject;
- (id)_deliverSynchronouslyWithCurrentSettings:(_Bool)arg1;
- (id)_deliveryAccountForInitializers;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;

@end
