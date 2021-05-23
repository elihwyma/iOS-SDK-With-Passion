/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UILabel.h>

@interface AAUILabel : UILabel

{
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic) struct UIEdgeInsets edgeInsets;

- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithEdgeInsets:(struct UIEdgeInsets)arg1;

@end
