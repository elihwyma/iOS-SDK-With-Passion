/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class IKImageElement, IKViewElement, NSOperation, NSString, UICollectionReusableView, UIImage, VUIScorecardView, VUISportsOverlayLayout, VUISportsScoreboardViewModel, VUITextBadgeView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUISportsOverlayView : UIView

{
    _Bool _textBadgeHasMaterial;
    _Bool _backgroundImageHasChanged;
    _Bool _isHostSetup;
    UIImage *_backgroundImageForMaterialRendering;
    VUISportsOverlayLayout *_overlayLayout;
    VUISportsScoreboardViewModel *_scoreboardViewModel;
    IKViewElement *_viewElement;
    VUIScorecardView *_scorecardView;
    VUITextBadgeView *_textBadge;
    _TVImageView *_logoView;
    IKImageElement *_logoElement;
    NSOperation *_pendingOperation;
    UIImage *_scorecardViewBackgroundImage;
    UICollectionReusableView *_containingCell;
    struct CGSize _logoSize;
}

@property (retain, nonatomic) VUISportsOverlayLayout *overlayLayout;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIScorecardView *scorecardView;
@property (retain, nonatomic) VUISportsScoreboardViewModel *scoreboardViewModel;
@property (nonatomic) _Bool textBadgeHasMaterial;
@property (retain, nonatomic) VUITextBadgeView *textBadge;
@property (retain, nonatomic) _TVImageView *logoView;
@property (retain, nonatomic) IKImageElement *logoElement;
@property (nonatomic) struct CGSize logoSize;
@property (retain, nonatomic) NSOperation *pendingOperation;
@property (retain, nonatomic) UIImage *scorecardViewBackgroundImage;
@property (nonatomic) _Bool backgroundImageHasChanged;
@property (weak, nonatomic) UICollectionReusableView *containingCell;
@property (nonatomic) _Bool isHostSetup;
@property (retain, nonatomic) UIImage *backgroundImageForMaterialRendering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_sharedDrawQueue;
+ (_Bool)_viewBackgroundImageNeedsUpdatingWithFrame:(struct CGRect)arg1 currentBackgroundImage:(id)arg2;
+ (id)sportsOverlayViewFromElement:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)_updateTextBadge:(id)arg1;
- (_Bool)_updateScoreView:(id)arg1;
- (void)_updateBackgroundMaterialImagesWithBackgroundImageSize:(struct CGSize)arg1 performSynchronously:(_Bool)arg2;
- (void)_setupHosting;
- (void)_updateBadgePosition;
- (void)_registerOverlayView;
- (void)_teardownHosting;
- (void)_unregisterOverlayView;
- (void)_cancelPendingOperation;
- (_Bool)_scorecardViewBackgroundImageNeedsUpdating;
- (void)_redrawScorecardViewWithDuration:(double)arg1;
- (_Bool)_textBadgeBackgroundImageNeedsUpdating;
- (void)_redrawTextBadgeWithDuration:(double)arg1;
- (void)_updateBackgroundImagesWithCompletedOperation:(id)arg1;
- (_Bool)_scorecardViewRequiresBackgroundImage;
- (_Bool)_textBadgeRequiresBackgroundImage;
- (void)_redrawView:(id)arg1 withDuration:(double)arg2;
- (long long)styleForScorecardView:(id)arg1;
- (long long)numberOfRowsInScorecardView:(id)arg1;
- (long long)numberOfScoreValuesForScorecardView:(id)arg1 inRow:(long long)arg2;
- (id)scoreValue:(id)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;
- (double)maximumWidthForScorecardView:(id)arg1;
- (id)backgroundImageForScorecardViewMaterial:(id)arg1;
- (int)backgroundBlendModeForScoreValueInRow:(long long)arg1 atIndex:(long long)arg2;
- (void)backgroundImageSizeDidChange:(struct CGSize)arg1;
- (void)updateScoreboard:(id)arg1;
- (id)getJSContextDictionary;

@end
