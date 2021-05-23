/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSArray, NSString, TLKImage, TLKMultilineText, TLKRichText, TLKTextAreaView;

@protocol TLKDetailsViewDelegate;

@interface TLKDetailsView

{
    _Bool _secondaryTitleIsDetached;
    TLKRichText *_title;
    id <TLKDetailsViewDelegate> _delegate;
    TLKMultilineText *_secondaryTitle;
    TLKImage *_secondaryTitleImage;
    NSArray *_details;
    TLKRichText *_footnote;
    NSString *_footnoteButtonText;
}

@property (retain, nonatomic) TLKTextAreaView *contentView;
@property (retain, nonatomic) TLKRichText *title;
@property (weak, nonatomic) id <TLKDetailsViewDelegate> delegate;
@property (retain, nonatomic) TLKMultilineText *secondaryTitle;
@property (nonatomic) _Bool secondaryTitleIsDetached;
@property (retain, nonatomic) TLKImage *secondaryTitleImage;
@property (retain, nonatomic) NSArray *details;
@property (retain, nonatomic) TLKRichText *footnote;
@property (retain, nonatomic) NSString *footnoteButtonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)setupContentView;
- (void)observedPropertiesChanged;
- (void)footnoteButtonPressed;
- (id)textAreaLabelStrings;
- (id)footnoteLabelString;
- (id)titleLabelString;
- (id)secondaryTitleLabelString;

@end
