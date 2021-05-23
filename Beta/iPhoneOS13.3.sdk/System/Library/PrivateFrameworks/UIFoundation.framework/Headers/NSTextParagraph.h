/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSTextElement.h>

@class NSAttributedString, NSMutableArray, NSTextDataProvider, NSTextRange;

@interface NSTextParagraph : NSTextElement

{
    NSAttributedString *_attributedString;
    struct _NSRange _range;
    NSTextRange *_paragraphContentRange;
    NSTextRange *_paragraphSeparatorRange;
    NSTextDataProvider *_textDataProvider;
    NSMutableArray *_textLayoutFragments;
}

@property (copy, readonly) NSAttributedString *attributedString;
@property (readonly) NSTextRange *paragraphContentRange;
@property (readonly) NSTextRange *paragraphSeparatorRange;

+ (id)textParagraphsForAttributedString:(id)arg1 range:(struct _NSRange)arg2;

- (id)init;
- (void)dealloc;
- (void)setAttributedString:(id)arg1;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithTextContentManager:(id)arg1;
- (void)setTextDataProvider:(id)arg1;
- (void)setParagraphContentRange:(id)arg1;
- (void)setParagraphSeparatorRange:(id)arg1;
- (void)synchronizeDocumentRange;
- (id)paragraphRange;
- (id)textDataProvider;

@end
