/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSString, TTZoomController;

@interface TTTextController : NSObject

{
    _Bool _keepNSTextTableAttributes;
    _Bool _disableSingleLineA;
    double _bodyStyleFontSizeThreshold;
    double _headingStyleFontSizeThreshold;
    TTZoomController *_zoomController;
}

@property (nonatomic) double bodyStyleFontSizeThreshold;
@property (nonatomic) double headingStyleFontSizeThreshold;
@property (retain, nonatomic) TTZoomController *zoomController;
@property (nonatomic) _Bool keepNSTextTableAttributes;
@property (nonatomic) _Bool disableSingleLineA;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)superscriptScaleFactor;
+ (struct UIFont *)preferredFontForTTTextStyle:(unsigned int)arg1;
+ (double)bodyParagraphSpacing;
+ (double)bodyParagraphSpacingBefore;
+ (double)attachmentParagraphSpacing;
+ (double)attachmentParagraphSpacingBefore;

- (id)init;
- (id)defaultParagraphStyle;
- (id)titleAttributes;
- (id)styleForModelAttributes:(id)arg1;
- (id)modelForStyleAttributes:(id)arg1 filterAttributes:(_Bool)arg2;
- (void)styleText:(id)arg1 inRange:(struct _NSRange)arg2 fixModelAttributes:(_Bool)arg3;
- (void)styleText:(id)arg1 inExactRange:(struct _NSRange)arg2 fixModelAttributes:(_Bool)arg3 enableLetterpress:(_Bool)arg4;
- (id)headingAttributes;
- (id)subheadingAttributes;
- (id)bodyAttributes;
- (id)fixedWidthAttributes;
- (id)defaultListAttributes;
- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(id)arg1;
- (void)resetGuessedFontSizes;
- (void)styleFontInAttributedString:(id)arg1 inRange:(struct _NSRange)arg2 contentSizeCategory:(id)arg3;
- (void)styleListsAndIndentsInAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)preferredAttributesForTTTextStyle:(unsigned int)arg1;
- (id)typingAttributesForRange:(struct _NSRange)arg1 forSelectionChange:(_Bool)arg2 currentTypingAttributes:(id)arg3 inTextStorage:(id)arg4;
- (void)styleText:(id)arg1 inExactRange:(struct _NSRange)arg2 fixModelAttributes:(_Bool)arg3;
- (void)fixModelAttributesInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)defaultTypingAttributesForEmptyDocument;
- (id)titleAttributesWithContentSizeCategory:(id)arg1;
- (id)headingAttributesWithContentSizeCategory:(id)arg1;
- (id)subheadingAttributesWithContentSizeCategory:(id)arg1;
- (id)captionAttributesWithContentSizeCategory:(id)arg1;
- (id)bodyAttributesWithContentSizeCategory:(id)arg1;
- (id)defaultListAttributesWithContentSizeCategory:(id)arg1;
- (id)checklistAttributesWithContentSizeCategory:(id)arg1;
- (id)fixedWidthAttributesWithContentSizeCategory:(id)arg1;
- (id)typingAttributesForRange:(struct _NSRange)arg1 forSelectionChange:(_Bool)arg2 forSettingTextStyle:(_Bool)arg3 currentTypingAttributes:(id)arg4 inTextStorage:(id)arg5;
- (id)strippedTypingAttributesAtStartOfParagraph:(id)arg1 atTheEndOfDocument:(_Bool)arg2 isTyping:(_Bool)arg3;
- (id)copyAttribute:(id)arg1 fromAttributes:(id)arg2 toAttributes:(id)arg3;
- (id)referenceAttributesForLocation:(unsigned long long)arg1 textStorage:(id)arg2 currentParagraphStart:(unsigned long long)arg3;
- (id)removeAttribute:(id)arg1 ifInconsistentAtLocation:(unsigned long long)arg2 inTextStorage:(id)arg3 forNewTypingAttributes:(id)arg4;
- (id)copyNSParagraphStylefromAttributes:(id)arg1 toAttributes:(id)arg2;
- (id)styleForModelAttributes:(id)arg1 contentSizeCategory:(id)arg2;
- (void)addBIToStyle:(id)arg1;
- (id)captionAttributes;
- (void)styleFontInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)addLetterpressInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)removeLetterpressInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)checklistAttributes;
- (id)typingAttributesForSettingTextStyleForRange:(struct _NSRange)arg1 currentTypingAttributes:(id)arg2 inTextStorage:(id)arg3;
- (id)filterStyleAttributes:(id)arg1 range:(struct _NSRange)arg2;

@end
