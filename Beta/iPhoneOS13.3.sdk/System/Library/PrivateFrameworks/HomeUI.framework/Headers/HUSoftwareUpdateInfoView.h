/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HUInlineWebContainerView, HUSoftwareUpdateAnimatedIcon, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel, UIStackView;

@protocol HUResizableCellDelegate, HUSoftwareUpdateInternalResizingDelegate;

@interface HUSoftwareUpdateInfoView : UIView <Swift>

{
    HFItem *_item;
    id <HUSoftwareUpdateInternalResizingDelegate> _internalViewResizingDelegate;
    HUSoftwareUpdateAnimatedIcon *_animatedGearView;
    UIImage *_gearBackgroundImage;
    UIImageView *_gearBackgroundImageView;
    UIStackView *_labelStackView;
    UILabel *_updateNameLabel;
    UILabel *_publisherNameLabel;
    UILabel *_sizeLabel;
    HUInlineWebContainerView *_releaseNotesSummaryView;
    NSLayoutConstraint *_releaseNotesSummaryHeightConstraint;
}

@property (weak, nonatomic) id <HUSoftwareUpdateInternalResizingDelegate> internalViewResizingDelegate;
@property (retain, nonatomic) HUSoftwareUpdateAnimatedIcon *animatedGearView;
@property (retain, nonatomic) UIImage *gearBackgroundImage;
@property (retain, nonatomic) UIImageView *gearBackgroundImageView;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UILabel *updateNameLabel;
@property (retain, nonatomic) UILabel *publisherNameLabel;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) HUInlineWebContainerView *releaseNotesSummaryView;
@property (retain, nonatomic) NSLayoutConstraint *releaseNotesSummaryHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)_updateReleaseNotesHeightIfNeeded;
- (void)inlineWebContainerViewDidFinishLoadingContent:(id)arg1;

@end
