/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface EKCustomTitleView : UIView

{
    _Bool _showSubtitle;
    _Bool _animating;
    UILabel *_originalTitle;
    UILabel *_title;
    UIImageView *_originalImage;
    UIImageView *_titleImage;
    UILabel *_subTitle;
}

@property (retain) UILabel *originalTitle;
@property (retain) UILabel *title;
@property (retain) UIImageView *originalImage;
@property (retain) UIImageView *titleImage;
@property (retain) UILabel *subTitle;
@property _Bool showSubtitle;
@property _Bool animating;

- (_Bool)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGRect)_centerAndClipFrame:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 eventViewController:(id)arg3;
- (void)animateInWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateOutWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
