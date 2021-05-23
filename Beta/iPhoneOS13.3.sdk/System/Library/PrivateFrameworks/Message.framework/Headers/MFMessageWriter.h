/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface MFMessageWriter : NSObject

{
    Class _messageClassToInstantiate;
    unsigned int _allows8BitMimeParts:1;
    unsigned int _allowsBinaryMimeParts:1;
    unsigned int _writeSizeDispositionParameter:1;
    unsigned int _allowsQuotedPrintable:1;
    _Bool _shouldWriteAttachmentPlaceholders;
    id _delegate;
    NSDictionary *_compositionSpecification;
}

@property (weak, nonatomic) id delegate;
@property (nonatomic, readonly) NSDictionary *compositionSpecification;
@property (nonatomic) _Bool shouldWriteAttachmentPlaceholders;

- (id)init;
- (void)setAllowsQuotedPrintable:(_Bool)arg1;
- (void)appendDataForMimePart:(id)arg1 toData:(id)arg2 withPartData:(id)arg3;
- (id)initWithCompositionSpecification:(id)arg1;
- (id)createMessageWithHTMLStringAndMIMECharset:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4;
- (id)createMessageWithPlainTextDocumentsAndAttachments:(id)arg1 headers:(id)arg2;
- (id)createMessageWithString:(id)arg1 headers:(id)arg2;
- (id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4;
- (id)createMessageWithHtmlString:(id)arg1 attachments:(id)arg2 headers:(id)arg3;
- (id)newDataForMimePart:(id)arg1 withPartData:(id)arg2;
- (_Bool)allows8BitMimeParts;
- (void)setAllows8BitMimeParts:(_Bool)arg1;
- (_Bool)allowsBinaryMimeParts;
- (void)setAllowsBinaryMimeParts:(_Bool)arg1;
- (_Bool)allowsQuotedPrintable;
- (void)setWriteSizeDispositionParameter:(_Bool)arg1;
- (void)setMessageClassToInstantiate:(Class)arg1;

@end
