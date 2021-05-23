/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSDictionary, NSMutableDictionary, NSString, UIFont, UITextView;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDDescriptionView : UIView

{
    UITextView *_textView;
    NSDictionary *_textAttributes;
    NSMutableDictionary *_glyphViews;
    unsigned long long _glyphSize;
    struct CGSize _intrinsicContentSize;
    double _spaceWidth;
    UIFont *_font;
}

@property (nonatomic) double spaceWidth;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
- (long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;
- (struct CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect)arg4 glyphPosition:(struct CGPoint)arg5 characterIndex:(unsigned long long)arg6;
- (unsigned long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short *)arg2 properties:(const long long *)arg3 characterIndexes:(const unsigned long long *)arg4 font:(id)arg5 forGlyphRange:(struct _NSRange)arg6;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)invalidateIntrinsicContentSize;
- (id)initWithText:(id)arg1 font:(id)arg2 lineHeight:(double)arg3 lineSpacing:(double)arg4 color:(id)arg5 edgeInsets:(struct UIEdgeInsets)arg6;

@end
