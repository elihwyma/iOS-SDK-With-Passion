/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMFromSuperParserContext.h>

@class NSArray, NSAttributedString, NSMutableArray, NSMutableAttributedString, NSString;

@interface IMSuperToSuperSanitizerContext : IMFromSuperParserContext

{
    NSMutableAttributedString *_content;
    NSMutableArray *_attachments;
    NSString *_backgroundColor;
    NSString *_foregroundColor;
    unsigned long long _offset;
    long long _baseWritingDirection;
    _Bool _extractAttachments;
    _Bool _hadBaseWritingDirectionAttribute;
}

@property (retain, readonly) NSAttributedString *sanitizedContent;
@property (retain, readonly) NSArray *attachments;

- (void)dealloc;
- (id)name;
- (id)resultsForLogging;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 characters:(id)arg4;
- (void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9;
- (void)parserDidEnd:(id)arg1;
- (id)initWithAttributedString:(id)arg1 extractAttachments:(_Bool)arg2;

@end
