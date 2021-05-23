/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <MIME/MFMimePart.h>

@interface MFMailMimePart : MFMimePart

+ (_Bool)isRecognizedClassForContent:(id)arg1;
+ (Class)attachmentClass;

- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3 asHTML:(_Bool)arg4 isComplete:(_Bool *)arg5;
- (id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3;
- (id)fileWrapperForcingDownload:(_Bool)arg1;
- (void)configureFileWrapper:(id)arg1;
- (id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id *)arg2;
- (_Bool)_shouldContinueDecodingProcess;
- (id)decodeTextRichtext;
- (id)decodeTextEnriched;
- (id)decodeTextHtml;
- (id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2;
- (id)htmlContent;
- (id)decodeTextPlain;
- (id)decodeTextCalendar;
- (id)decodeMultipartAppledouble;
- (id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(_Bool)arg3;
- (id)decodeMessageDelivery_status;
- (id)decodeMessageRfc822;
- (id)decodeMessagePartial;
- (id)decodeMessageExternal_body;

@end
