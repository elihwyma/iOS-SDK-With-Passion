/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

@class ICAttachmentBrickLabelV2, NSLayoutConstraint, NSString, UILayoutGuide;

@interface ICAttachmentBrickTextViewV2 : UIView

{
    _Bool _titleLight;
    _Bool _detail1Dark;
    _Bool _vibrant;
    _Bool _disableVibrancy;
    NSString *_titleString;
    NSString *_detail1String;
    NSString *_detail2String;
    ICAttachmentBrickLabelV2 *_titleView;
    ICAttachmentBrickLabelV2 *_detail1View;
    ICAttachmentBrickLabelV2 *_detail2View;
    UILayoutGuide *_textBoxLayoutGuide;
    NSLayoutConstraint *_textBoxTopConstraint;
    NSLayoutConstraint *_textBoxLeadingConstraint;
    NSLayoutConstraint *_textBoxTrailingConstraint;
    NSLayoutConstraint *_textBoxBottomConstraint;
}

@property (retain, nonatomic) ICAttachmentBrickLabelV2 *titleView;
@property (retain, nonatomic) ICAttachmentBrickLabelV2 *detail1View;
@property (retain, nonatomic) ICAttachmentBrickLabelV2 *detail2View;
@property (retain, nonatomic) UILayoutGuide *textBoxLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *textBoxTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textBoxLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textBoxTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textBoxBottomConstraint;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *detail1String;
@property (copy, nonatomic) NSString *detail2String;
@property (nonatomic) _Bool titleLight;
@property (nonatomic) _Bool detail1Dark;
@property (nonatomic) _Bool vibrant;
@property (nonatomic) _Bool disableVibrancy;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)contentSizeCategoryDidChange;
- (_Bool)allowsVibrancy;
- (void)updateMargins;
- (void)updateTextLayout;
- (void)updateTextColors;
- (void)updateTextFonts;

@end
