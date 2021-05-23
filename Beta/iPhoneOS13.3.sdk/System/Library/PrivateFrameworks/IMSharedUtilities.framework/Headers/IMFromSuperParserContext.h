/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMAttributedStringParserContext.h>

@class NSArray, NSMutableArray;

@interface IMFromSuperParserContext : IMAttributedStringParserContext

{
    NSMutableArray *_inlinedFileTransferGUIDs;
    NSMutableArray *_standaloneFileTransferGUIDs;
    _Bool _foundBreadcrumbText;
}

@property (retain, nonatomic, readonly) NSArray *inlinedFileTransferGUIDs;
@property (retain, nonatomic, readonly) NSArray *standaloneFileTransferGUIDs;
@property (nonatomic, readonly) _Bool foundBreadcrumbText;

- (void)dealloc;
- (id)name;
- (id)initWithAttributedString:(id)arg1;
- (id)resultsForLogging;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 characters:(id)arg4;
- (void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9;
- (void)parser:(id)arg1 foundBreadcrumbText:(id)arg2 withOptions:(unsigned int)arg3;
- (void)parserDidStart:(id)arg1;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8;

@end
