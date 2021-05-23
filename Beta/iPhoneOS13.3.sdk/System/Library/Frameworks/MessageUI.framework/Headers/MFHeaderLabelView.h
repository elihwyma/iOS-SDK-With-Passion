/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UILabel.h>

@interface MFHeaderLabelView : UILabel

+ (id)_defaultColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (struct CGPoint)baselinePoint;
- (void)_updateTextColor;
- (id)effectiveTextColor;

@end
