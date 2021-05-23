/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CKPhotoTileBadgeView : UIView

{
    _Bool _enabled;
    _Bool _selected;
    UIButton *_actionButton;
    UIView *__backgroundView;
    UIImageView *__badgeImageView;
    UILabel *__textLabel;
}

@property (nonatomic, readonly) UIView *_backgroundView;
@property (nonatomic, readonly) UIImageView *_badgeImageView;
@property (nonatomic, readonly) UILabel *_textLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isSelected) _Bool selected;

+ (double)horizontalBadgeInset;
+ (double)verticalBadgeInset;

- (struct CGSize)maximumSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateBadgeText;
- (void)_updateBadgeImage;

@end
