/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/MFMailComposeHeaderView.h>

@class CNComposeHeaderLabelView, NSString, UILabel;

@interface MFComposeMultiView : MFMailComposeHeaderView

{
    UILabel *_accountLabel;
    CNComposeHeaderLabelView *_imageSizeHeaderLabelView;
    UILabel *_imageSizeLabel;
    UILabel *_placeholderImageSizeLabel;
    _Bool _imageSizeShown;
    NSString *_accountDescription;
    _Bool _accountHasUnsafeDomain;
    _Bool _accountAutoselected;
}

@property (nonatomic, getter=isAccountAutoselected) _Bool accountAutoselected;
@property (nonatomic) _Bool accountHasUnsafeDomain;

- (void)setAccountDescription:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)labelColor;
- (void)layoutSubviews;
- (void)refreshPreferredContentSize;
- (id)accountLabel;
- (id)_accountDescriptionAttributedString;
- (id)imageSizeLabel;
- (id)imageSizeHeaderLabelView;
- (id)placeholderImageSizeLabel;
- (void)setImageSizeDescription:(id)arg1;
- (void)setShowsImageSize:(_Bool)arg1;

@end
