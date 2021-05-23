/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView;

@interface TSDCheckableTableViewCell : UITableViewCell

{
    UIButton *mImageButton;
    UIImageView *mCheckmarkImageView;
    _Bool mChecked;
    _Bool mShowsCheckboxOnRight;
}

@property (nonatomic, readonly) _Bool showsCheckboxOnRight;
@property (nonatomic) _Bool checked;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)imageForState:(unsigned long long)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithReuseIdentifier:(id)arg1 showsCheckboxOnRight:(_Bool)arg2;
- (id)initWithReuseIdentifier:(id)arg1 showsCheckboxOnRight:(_Bool)arg2 style:(long long)arg3;
- (void)setCheckmarkImage:(id)arg1 forState:(unsigned long long)arg2;

@end
