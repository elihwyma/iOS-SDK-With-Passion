/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAMApertureStatusIndicator, CAMDirectionalIndicator, CAMFilterStatusIndicator, CAMFlashStatusIndicator, CAMHDRStatusIndicator, CAMIntensityStatusIndicator, CAMLivePhotoStatusIndicator, CAMLowLightStatusIndicator, CAMTimerStatusIndicator, CAMVideoConfigurationStatusIndicator, NSArray, NSMutableDictionary, NSSet, NSString;

@protocol CAMControlStatusBarDelegate;

@interface CAMControlStatusBar : UIView

{
    _Bool _directionIndicatorVisible;
    _Bool __directionIndicatorHiddenForSpace;
    id <CAMControlStatusBarDelegate> _delegate;
    NSArray *_primaryVisibleIndicatorTypes;
    NSArray *_secondaryVisibleIndicatorTypes;
    CAMDirectionalIndicator *_directionIndicator;
    UIView *_primaryAccessoryControl;
    UIView *_secondaryAccessoryControl;
    long long _orientation;
    NSMutableDictionary *__statusIndicatorsByType;
    NSSet *__allVisibleTypes;
}

@property (nonatomic, readonly) NSMutableDictionary *_statusIndicatorsByType;
@property (retain, nonatomic, setter=_setAllVisibleTypes:) NSSet *_allVisibleTypes;
@property (nonatomic, getter=_isDirectionIndicatorHiddenForSpace, setter=_setDirectionIndicatorHiddenForSpace:) _Bool _directionIndicatorHiddenForSpace;
@property (weak, nonatomic) id <CAMControlStatusBarDelegate> delegate;
@property (copy, nonatomic) NSArray *primaryVisibleIndicatorTypes;
@property (copy, nonatomic) NSArray *secondaryVisibleIndicatorTypes;
@property (nonatomic, readonly) CAMFlashStatusIndicator *flashIndicator;
@property (nonatomic, readonly) CAMLivePhotoStatusIndicator *livePhotoIndicator;
@property (nonatomic, readonly) CAMHDRStatusIndicator *hdrIndicator;
@property (nonatomic, readonly) CAMTimerStatusIndicator *timerIndicator;
@property (nonatomic, readonly) CAMFilterStatusIndicator *filterIndicator;
@property (nonatomic, readonly) CAMApertureStatusIndicator *apertureIndicator;
@property (nonatomic, readonly) CAMIntensityStatusIndicator *intensityIndicator;
@property (nonatomic, readonly) CAMVideoConfigurationStatusIndicator *videoConfigurationIndicator;
@property (nonatomic, readonly) CAMLowLightStatusIndicator *lowLightIndicator;
@property (nonatomic, getter=isDirectionIndicatorVisible) _Bool directionIndicatorVisible;
@property (nonatomic, readonly) CAMDirectionalIndicator *directionIndicator;
@property (retain, nonatomic) UIView *primaryAccessoryControl;
@property (retain, nonatomic) UIView *secondaryAccessoryControl;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)_iterateViewsForHUDManager:(id)arg1 withItemFoundBlock:(CDUnknownBlockType)arg2;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)controlStatusIndicatorDidChangeIntrinsicContentSize:(id)arg1 animated:(_Bool)arg2;
- (void)setDirectionIndicatorVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isIndicatorVisibleForType:(unsigned long long)arg1;
- (void)setPrimaryVisibleIndicatorTypes:(id)arg1 secondaryVisibleIndicatorTypes:(id)arg2 animated:(_Bool)arg3;
- (void)_layoutAllVisibleTypes:(id)arg1 atOrigin:(long long)arg2;
- (void)_layoutVisibleViewsForTypes:(id)arg1 inVisibleTypes:(id)arg2 atOrigin:(long long)arg3;
- (void)_handleFlashStatusIndicatorTapped:(id)arg1;
- (void)_handleLivePhotoStatusIndicatorTapped:(id)arg1;
- (void)_handleHDRStatusIndicatorTapped:(id)arg1;
- (void)_handleTimerStatusIndicatorTapped:(id)arg1;
- (void)_handleFilterStatusIndicatorTapped:(id)arg1;
- (void)_handleApertureStatusIndicatorTapped:(id)arg1;
- (void)_handleIntensityStatusIndicatorTapped:(id)arg1;
- (void)_handleLowLightStatusIndicatorTapped:(id)arg1;
- (void)_ensureVisibleIndicators;
- (void)_prelayoutForNewTypes:(id)arg1 oldTypes:(id)arg2 atOrigin:(long long)arg3;
- (void)_updateIndicatorsVisibilityAnimated:(_Bool)arg1;
- (void)_updateDirectionIndicatorAlphaAnimated:(_Bool)arg1;
- (void)_loadIndicatorIfNeededForType:(unsigned long long)arg1;
- (void)_installIndicatorIfNeededForType:(unsigned long long)arg1;
- (id)_createIndicatorForType:(unsigned long long)arg1;

@end
