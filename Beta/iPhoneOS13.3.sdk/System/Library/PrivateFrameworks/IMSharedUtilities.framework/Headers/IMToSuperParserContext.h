/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMXMLParserContext.h>

@class NSArray, NSAttributedString, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSString;

@interface IMToSuperParserContext : IMXMLParserContext

{
    unsigned long long _underlineCount;
    unsigned long long _boldCount;
    unsigned long long _italicCount;
    unsigned long long _strikethroughCount;
    unsigned long long _messagePartNumber;
    NSMutableArray *_fontFamilyStack;
    NSMutableArray *_fontSizeStack;
    NSMutableArray *_linkStack;
    NSMutableArray *_backgroundColorStack;
    NSMutableArray *_foregroundColorStack;
    NSMutableDictionary *_currentAttributes;
    _Bool _didAddBodyAttributes;
    NSMutableAttributedString *_body;
    NSMutableArray *_fileTransferGUIDs;
    NSString *_backgroundColor;
    NSString *_foregroundColor;
    long long _baseWritingDirection;
}

@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *foregroundColor;
@property (nonatomic, readonly) NSAttributedString *body;
@property (retain, nonatomic) NSArray *fileTransferGUIDs;
@property long long baseWritingDirection;

- (void)dealloc;
- (id)name;
- (void)appendString:(id)arg1;
- (void)reset;
- (id)resultsForLogging;
- (void)pushLink:(id)arg1;
- (void)popLink;
- (void)incrementBoldCount;
- (void)decrementBoldCount;
- (void)incrementItalicCount;
- (void)decrementItalicCount;
- (void)pushFontFamily:(id)arg1;
- (void)pushFontSize:(id)arg1;
- (void)popFontFamily;
- (void)popFontSize;
- (void)incrementStrikethroughCount;
- (void)decrementStrikethroughCount;
- (void)incrementUnderlineCount;
- (void)decrementUnderlineCount;
- (void)appendBreadcrumbText:(id)arg1 withOptions:(unsigned int)arg2;
- (void)_clearIvars;
- (void)_initIvars;
- (void)_updateFontFamily;
- (void)_updateFontSize;
- (void)_pushValue:(id)arg1 ontoStack:(id)arg2 attributeName:(id)arg3;
- (void)_popValueFromStack:(id)arg1 attributeName:(id)arg2;
- (void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4 emoji:(long long)arg5;
- (void)_incrementMessagePartNumber;
- (void)pushBackgroundColor:(id)arg1;
- (void)popBackgroundColor;
- (void)pushForegroundColor:(id)arg1;
- (void)popForegroundColor;
- (void)appendFileTransferWithGUID:(id)arg1;
- (void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4;

@end
