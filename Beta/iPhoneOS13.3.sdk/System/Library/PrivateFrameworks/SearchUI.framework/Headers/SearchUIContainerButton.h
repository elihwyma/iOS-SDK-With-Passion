/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <UIKit/UIButton.h>

@class SearchUIHorizontallyScrollingContainerButtonController, UIView;

@interface SearchUIContainerButton : UIButton

{
    UIView *_contentView;
    SearchUIHorizontallyScrollingContainerButtonController *_buttonController;
}

@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) SearchUIHorizontallyScrollingContainerButtonController *buttonController;

- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithContainerButtonController:(id)arg1;

@end
