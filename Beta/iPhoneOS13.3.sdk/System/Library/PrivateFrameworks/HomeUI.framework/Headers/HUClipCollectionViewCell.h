/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

@class CALayer, HMCameraClip, UIView;

@interface HUClipCollectionViewCell : UICollectionViewCell

{
    unsigned long long _displayMode;
    HMCameraClip *_clip;
    CALayer *_badgeLayer;
    UIView *_posterFramesContainerView;
    UIView *_dayBoundaryView;
}

@property (nonatomic) unsigned long long displayMode;
@property (weak, nonatomic) HMCameraClip *clip;
@property (retain, nonatomic) CALayer *badgeLayer;
@property (retain, nonatomic) UIView *posterFramesContainerView;
@property (retain, nonatomic) UIView *dayBoundaryView;

+ (id)backgroundColor;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithClip:(id)arg1 mode:(unsigned long long)arg2;
- (id)_badgeImageForSignificantEventReasons:(id)arg1;
- (void)_addPosterFrameViews;
- (void)_addDayBoundaryIfNeeded;
- (void)_synchronizeLoadingIndicators;
- (void)_drawEventMarkers;
- (void)_updateBadgeLayerWithEvents:(id)arg1 inRect:(struct CGRect)arg2;
- (void)_updateBadgeLayerWithImage:(id)arg1 inRect:(struct CGRect)arg2;
- (void)preparePosterFrameViewsForReuse;

@end
