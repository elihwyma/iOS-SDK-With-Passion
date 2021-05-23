/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIStackView.h>

@interface MFRoundedCornersStackView : UIStackView

{
    double _cornerRadius;
}

@property (nonatomic) double cornerRadius;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)mf_addArrangedSubviews:(id)arg1;
- (void)updateRoundedCorners;

@end
