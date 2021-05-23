/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionViewCell.h>

@class AVTImageTransitioningContainerView, AVTView, NSString, UIImage, UIView;

@protocol AVTAvatarRecord;

@interface AVTAvatarListCell : UICollectionViewCell

{
    AVTView *_avtView;
    id <AVTAvatarRecord> _avatar;
    AVTImageTransitioningContainerView *_containerView;
}

@property (retain, nonatomic) AVTView *avtView;
@property (nonatomic, readonly) AVTImageTransitioningContainerView *containerView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) UIView *avtViewContainer;
@property (retain, nonatomic) id <AVTAvatarRecord> avatar;
@property (nonatomic) struct CGSize aspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)snapshotViewAfterScreenUpdates:(_Bool)arg1;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)downcastWithCellHandler:(CDUnknownBlockType)arg1 listCellHandler:(CDUnknownBlockType)arg2;
- (void)setImageViewVisible:(_Bool)arg1;
- (void)beginUsingAVTViewFromSession:(id)arg1;
- (void)endUsingAVTView;
- (void)transitionStaticViewToFront;
- (id)liveView;
- (void)transitionLiveViewToFront;
- (void)applyFullAlpha;
- (void)applyBaseAlpha;

@end
