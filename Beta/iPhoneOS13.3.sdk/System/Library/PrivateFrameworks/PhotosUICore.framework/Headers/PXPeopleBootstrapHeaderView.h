/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionReusableView.h>

@class NSString, PXPeopleScalableAvatarView, UILabel;

@interface PXPeopleBootstrapHeaderView : UICollectionReusableView

{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PXPeopleScalableAvatarView *_avatarView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) PXPeopleScalableAvatarView *avatarView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setPerson:(id)arg1;

@end
