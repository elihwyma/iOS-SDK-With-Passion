/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class DeliveryAccount, ECHTMLStringAndMIMECharset, EMMessageObjectID, MFDeliveryResult, MFMailMessage, MFMutableMessageHeaders, MFPlainTextDocument, MailAccount, NSArray, NSDictionary;

@interface MFMailDelivery : NSObject

{
    id _delegate;
    MFMailMessage *_message;
    MailAccount *_archiveAccount;
    DeliveryAccount *_account;
    MFDeliveryResult *_result;
    MFMutableMessageHeaders *_headers;
    NSDictionary *_compositionSpecification;
    NSArray *_mixedContent;
    _Bool _textPartsAreHTML;
    ECHTMLStringAndMIMECharset *_htmlString;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherStringsAndAttachments;
    unsigned int _threaded:1;
    unsigned int _useCellDataOnly:1;
    _Bool _isUserRequested;
    _Bool _shouldSign;
    _Bool _shouldEncrypt;
    unsigned long long _conversationFlags;
    EMMessageObjectID *_originalMessageObjectID;
    MFMailMessage *_originalMessage;
    long long _action;
}

@property (retain, nonatomic) NSDictionary *compositionSpecification;
@property (nonatomic) unsigned long long conversationFlags;
@property (nonatomic) _Bool isUserRequested;
@property (retain, nonatomic) EMMessageObjectID *originalMessageObjectID;
@property (retain, nonatomic) MFMailMessage *originalMessage;
@property (nonatomic) long long action;
@property (nonatomic) _Bool shouldSign;
@property (nonatomic) _Bool shouldEncrypt;
@property (weak, nonatomic) id delegate;

+ (id)newWithMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
+ (_Bool)deliverMessage:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)message;
- (id)account;
- (void)setAccount:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (void)archive;
- (id)newMessageWriter;
- (id)deliverSynchronously;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (void)updateOriginalMessageFromHeaders:(id)arg1;
- (id)originalHeaders;
- (id)headersForDelivery;
- (id)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (id)archiveAccount;
- (void)setArchiveAccount:(id)arg1;
- (long long)deliveryStatus;
- (id)deliveryResult;
- (void)deliverAsynchronously;
- (void)setCellDataOnly:(_Bool)arg1;

@end
