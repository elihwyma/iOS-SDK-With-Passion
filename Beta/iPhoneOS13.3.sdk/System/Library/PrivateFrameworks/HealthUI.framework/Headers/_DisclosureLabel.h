/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UILabel.h>

@interface _DisclosureLabel : UILabel

{
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic, readonly) struct UIEdgeInsets edgeInsets;

- (void)setBounds:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)drawTextInRect:(struct CGRect)arg1;

@end
