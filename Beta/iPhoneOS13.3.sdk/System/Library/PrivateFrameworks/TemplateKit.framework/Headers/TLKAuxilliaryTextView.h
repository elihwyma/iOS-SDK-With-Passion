/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSString, TLKFormattedText, TLKLabel, TLKStackView, TLKTextAreaView;

@interface TLKAuxilliaryTextView

{
    TLKFormattedText *_topText;
    TLKFormattedText *_middleText;
    TLKFormattedText *_bottomText;
    TLKLabel *_topLabel;
    TLKLabel *_middleLabel;
    TLKLabel *_bottomLabel;
    TLKTextAreaView *_textAreaViewForAlignment;
}

@property (retain, nonatomic) TLKLabel *topLabel;
@property (retain, nonatomic) TLKLabel *middleLabel;
@property (retain, nonatomic) TLKLabel *bottomLabel;
@property (retain, nonatomic) TLKTextAreaView *textAreaViewForAlignment;
@property (retain, nonatomic) TLKStackView *contentView;
@property (retain, nonatomic) TLKFormattedText *topText;
@property (retain, nonatomic) TLKFormattedText *middleText;
@property (retain, nonatomic) TLKFormattedText *bottomText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)formattedTextHasTextContent:(id)arg1;
+ (id)largeMiddleTextFont;

- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (void)generateAndSizeTextAreaViewIfNeeded;
- (void)matchBaselineOfLabel:(id)arg1 toView:(id)arg2;
- (id)middleLabelFont;
- (id)bottomLabelFont;
- (id)topLabelString;
- (id)middleLabelString;
- (id)bottomLabelString;

@end
