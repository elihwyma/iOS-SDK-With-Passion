/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKColoredBalloonView.h>

@class CKBalloonTextView, NSAttributedString, NSString;

@interface CKTextBalloonView : CKColoredBalloonView

{
    _Bool _centerTextWhenSkinny;
    _Bool _containsExcessiveLineHeightCharacters;
    CKBalloonTextView *_textView;
    NSAttributedString *_attributedText;
}

@property (retain, nonatomic) CKBalloonTextView *textView;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) _Bool centerTextWhenSkinny;
@property (nonatomic) _Bool containsExcessiveLineHeightCharacters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)prepareForDisplay;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)updateRasterizationForInvisibleInkEffect;
- (void)configureForComposition:(id)arg1;
- (void)configureForMessagePart:(id)arg1;
- (void)interactionStartedFromPreviewItemControllerInTextView:(id)arg1;
- (void)interactionStoppedFromPreviewItemControllerInTextView:(id)arg1;
- (double)textViewWidthForWidth:(double)arg1;
- (void)truncateForLargeText;
- (void)restoreFromLargeTextTruncation;

@end
