/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/NNMKHTMLParser.h>

@class NSDataDetector, NSLock, NSMutableAttributedString, NSMutableDictionary;

@interface NNMKContentAttributedStringHTMLParser : NNMKHTMLParser

{
    NSLock *_lock;
    NSMutableAttributedString *_parsedAttributedString;
    unsigned long long _maxLength;
    double _maxImageWidth;
    _Bool *_partiallyParsed;
    NSMutableDictionary *_imageAtachmentsDataByContentId;
    NSDataDetector *_dataDetector;
}

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableAttributedString *parsedAttributedString;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) double maxImageWidth;
@property (nonatomic) _Bool *partiallyParsed;
@property (retain, nonatomic) NSMutableDictionary *imageAtachmentsDataByContentId;
@property (retain, nonatomic) NSDataDetector *dataDetector;

+ (id)_scaleAndPrepareImageForClient:(id)arg1 maxWidth:(double)arg2 screenScale:(double)arg3;
+ (struct CGSize)_scaledDownSize:(struct CGSize)arg1 maxWidth:(double)arg2;
+ (id)imageAttachmentAttributedStringWithContentId:(id)arg1 imageSize:(struct CGSize)arg2 mergingAttributes:(id)arg3;
+ (id)attachmentAttributedStringWithContentId:(id)arg1 mergingAttributes:(id)arg2;
+ (id)adjustedImage:(id)arg1 maxWidth:(double)arg2 screenScale:(double)arg3;
+ (id)trimAttributedString:(id)arg1;

- (_Bool)isElementBlacklisted:(id)arg1 attributeQueryBlock:(CDUnknownBlockType)arg2;
- (_Bool)isErrorTypeBlacklisted:(char *)arg1;
- (_Bool)isElementIgnorable:(id)arg1;
- (void)appendString:(id)arg1 stringAttributes:(id)arg2;
- (void)appendImageWithSource:(id)arg1 width:(double)arg2 height:(double)arg3 stringAttributes:(id)arg4;
- (id)_parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 partiallyParsed:(_Bool *)arg5 imageAttachmentsLoaded:(id *)arg6 urlsForValidation:(id)arg7 urlsFound:(id *)arg8;
- (_Bool)_validateURLsAndHTMLTagsInParsedString:(id)arg1 urlsFound:(id *)arg2;
- (void)_addDataDetectionAttributes:(id)arg1;
- (_Bool)isWebLink:(id)arg1;
- (id)parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 partiallyParsed:(_Bool *)arg5 imageAttachmentsLoaded:(id *)arg6 urlsFound:(id *)arg7;
- (id)parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 partiallyParsed:(_Bool *)arg5 imageAttachmentsLoaded:(id *)arg6 urlsForValidation:(id)arg7;

@end
