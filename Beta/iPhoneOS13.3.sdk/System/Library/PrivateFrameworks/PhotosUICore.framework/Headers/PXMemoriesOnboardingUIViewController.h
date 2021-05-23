/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXOnboardingStatusUIView, PXOnboardingWelcomeUIView, PXPhotoAnalysisStatusController;

@protocol PXMemoriesOnboardingViewControllerDelegate;

@interface PXMemoriesOnboardingUIViewController : UIViewController <Swift>

{
    struct {
        _Bool views;
        _Bool stage;
        _Bool progress;
    } _needsUpdateFlags;
    id <PXMemoriesOnboardingViewControllerDelegate> _delegate;
    PXPhotoAnalysisStatusController *__statusController;
    unsigned long long __stage;
    PXOnboardingWelcomeUIView *__welcomeView;
    PXOnboardingStatusUIView *__statusView;
}

@property (nonatomic, readonly) PXPhotoAnalysisStatusController *_statusController;
@property (nonatomic, setter=_setStage:) unsigned long long _stage;
@property (nonatomic, setter=_setWelcomeView:) PXOnboardingWelcomeUIView *_welcomeView;
@property (nonatomic, setter=_setStatusView:) PXOnboardingStatusUIView *_statusView;
@property (weak, nonatomic) id <PXMemoriesOnboardingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)_needsUpdate;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)_updateViews;
- (void)_setNeedsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (id)_constraintsForMaximizingView:(id)arg1;
- (void)_tearDownViews;
- (void)startButtonTapped:(id)arg1;
- (void)_invalidateStage;
- (void)_updateStageIfNeeded;
- (void)_invalidateProgress;
- (void)_updateProgressIfNeeded;

@end
