/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionReusableView.h>

@class CKLabel, NSMutableArray, UIImageView;

@interface CKAvatarTitleCollectionReusableView : UICollectionReusableView

{
    _Bool _avatarPickerActive;
    CKLabel *_titleLabel;
    long long _style;
    long long _avatarTitleAccessoryImageType;
    long long _statusIndicatorType;
    UIImageView *_chevronImageView;
    UIImageView *_statusIndicatorImageView;
    NSMutableArray *_pendingTitles;
}

@property (retain, nonatomic) CKLabel *titleLabel;
@property (retain, nonatomic) UIImageView *chevronImageView;
@property (retain, nonatomic) UIImageView *statusIndicatorImageView;
@property (retain, nonatomic) NSMutableArray *pendingTitles;
@property (nonatomic) long long style;
@property (nonatomic) long long avatarTitleAccessoryImageType;
@property (nonatomic, getter=isAvatarPickerActive) _Bool avatarPickerActive;
@property (nonatomic) long long statusIndicatorType;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_rotateChevronImageView;
- (_Bool)isLTR;
- (void)_animateFromQueue;
- (void)setTitle:(id)arg1 animated:(_Bool)arg2;
- (void)configureWithTitle:(id)arg1;

@end
