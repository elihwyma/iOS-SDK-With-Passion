/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface _VideosExtrasMainMenuItemCollectionViewCell : UICollectionViewCell

{
    NSLayoutConstraint *_textLabelConstraint;
    UILabel *_textLabel;
}

@property (retain, nonatomic) NSLayoutConstraint *textLabelConstraint;
@property (nonatomic, readonly) UILabel *textLabel;

+ (id)_createLabelInCell:(id)arg1;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)safeAreaInsetsDidChange;
- (void)setSelected:(_Bool)arg1;
- (void)_dynamicTypeChanged;

@end
