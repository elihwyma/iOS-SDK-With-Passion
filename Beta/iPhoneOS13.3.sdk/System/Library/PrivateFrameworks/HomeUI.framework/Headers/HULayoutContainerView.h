/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@interface HULayoutContainerView : UIView

{
    UIView *_contentView;
    CDUnknownBlockType _layoutBlock;
}

@property (nonatomic, readonly) UIView *contentView;
@property (copy, nonatomic, readonly) CDUnknownBlockType layoutBlock;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithContentView:(id)arg1 layoutBlock:(CDUnknownBlockType)arg2;

@end
