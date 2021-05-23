/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class DeliveryAccount, MFDeliveryResult, MFMessage, MFMutableMessageHeaders, MFPlainTextDocument, MailAccount, NSArray, NSDictionary, NSString;

@interface MFMailDelivery : NSObject

{
    id _delegate;
    MFMessage *_message;
    MailAccount *_archiveAccount;
    DeliveryAccount *_account;
    MFDeliveryResult *_result;
    MFMutableMessageHeaders *_headers;
    NSDictionary *_compositionSpecification;
    NSArray *_mixedContent;
    _Bool _textPartsAreHTML;
    NSString *_htmlString;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherStringsAndAttachments;
    NSArray *_charsets;
    unsigned int _threaded:1;
    unsigned int _useCellDataOnly:1;
    _Bool _isUserRequested;
    unsigned long long _conversationFlags;
}

@property (retain, nonatomic) NSDictionary *compositionSpecification;
@property (nonatomic) unsigned long long conversationFlags;
@property (nonatomic) _Bool isUserRequested;

+ (id)newWithMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
+ (_Bool)deliverMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;

- (id)init;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)message;
- (id)account;
- (void)setAccount:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (void)archive;
- (id)newMessageWriter;
- (id)deliverSynchronously;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
- (id)originalHeaders;
- (id)headersForDelivery;
- (id)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (id)archiveAccount;
- (void)setArchiveAccount:(id)arg1;
- (long long)deliveryStatus;
- (id)deliveryResult;
- (void)deliverAsynchronously;
- (void)setCellDataOnly:(_Bool)arg1;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (_Bool)shouldSignMessage;
- (_Bool)shouldEncryptMessage;

@end
