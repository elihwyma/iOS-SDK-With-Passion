/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIView.h>

@interface NUContainerTitleView : UIView

{
    UIView *_contentView;
}

@property (nonatomic, readonly) UIView *contentView;

- (id)initWithCoder:(id)arg1;
- (id)initWithContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_centeringReferenceView;

@end
