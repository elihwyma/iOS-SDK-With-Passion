/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UILabel;

@interface MFSecureMIMEPersonHeaderView : UIView

{
    UIView *_signedLabel;
    UIView *_secureLabel;
    UIView *_warningLabel;
    UILabel *_label;
    NSArray *_buttons;
    unsigned int _editing:1;
}

@property (copy, nonatomic) NSString *signedLabelText;
@property (copy, nonatomic) NSString *secureLabelText;
@property (copy, nonatomic) NSString *warningLabelText;
@property (copy, nonatomic) NSString *explanationText;
@property (copy, nonatomic) NSArray *buttons;
@property (nonatomic) _Bool editing;

+ (id)_explanationLabelDefaultAttributes;

- (void)setBounds:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_warningLabel;
- (id)_signedLabel;
- (void)_setText:(id)arg1 forLabel:(id)arg2;
- (id)_secureLabel;
- (void)_insert:(_Bool)arg1 subview:(id)arg2;
- (double)heightThatFitsSubview:(id)arg1 padding:(double)arg2;
- (double)heightThatFitsMainLabel:(struct CGSize)arg1;
- (double)heightThatFitsButtons;
- (double)heightOfBottomMargin;
- (double)widthForSizingToFitSize:(struct CGSize)arg1;
- (_Bool)showsButtons;

@end
