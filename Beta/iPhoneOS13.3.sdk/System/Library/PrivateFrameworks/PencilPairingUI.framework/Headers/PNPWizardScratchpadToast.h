/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel, UIVisualEffectView;

@interface PNPWizardScratchpadToast : UIView

{
    UIVisualEffectView *_background;
    UILabel *_label;
    NSString *_text;
}

@property (copy, nonatomic) NSString *text;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;

@end
