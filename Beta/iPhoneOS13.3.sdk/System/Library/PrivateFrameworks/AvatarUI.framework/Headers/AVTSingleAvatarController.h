/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAdaptativeLayoutView, AVTImageTransitioningContainerView, AVTRenderingScope, AVTViewSession, NSString, _AVTAvatarRecordImageProvider;

@protocol AVTAvatarDisplayingControllerDelegate, AVTAvatarRecord, AVTPresenterDelegate, AVTTransition, AVTUILogger;

@interface AVTSingleAvatarController : NSObject

{
    id <AVTAvatarDisplayingControllerDelegate> delegate;
    id <AVTPresenterDelegate> presenterDelegate;
    AVTAdaptativeLayoutView *_view;
    AVTImageTransitioningContainerView *_transitioningContainer;
    id <AVTAvatarRecord> _displayedRecord;
    AVTViewSession *_avtViewSession;
    _AVTAvatarRecordImageProvider *_thumbnailRenderer;
    AVTRenderingScope *_renderingScope;
    id <AVTUILogger> _logger;
    id <AVTTransition> _currentTransition;
}

@property (retain, nonatomic) AVTAdaptativeLayoutView *view;
@property (retain, nonatomic) AVTImageTransitioningContainerView *transitioningContainer;
@property (retain, nonatomic) id <AVTAvatarRecord> displayedRecord;
@property (retain, nonatomic) AVTViewSession *avtViewSession;
@property (retain, nonatomic) _AVTAvatarRecordImageProvider *thumbnailRenderer;
@property (nonatomic, readonly) AVTRenderingScope *renderingScope;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (retain, nonatomic) id <AVTTransition> currentTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AVTPresenterDelegate> presenterDelegate;
@property (weak, nonatomic) id <AVTAvatarDisplayingControllerDelegate> delegate;

- (void)loadView;
- (void)viewDidLoad;
- (void)reloadData;
- (_Bool)isViewLoaded;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2;
- (void)useAVTViewFromSession:(id)arg1 withLayout:(id)arg2;
- (void)stopUsingAVTViewSessionSynchronously:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareToTransitionToVisible:(_Bool)arg1 completionHandler:(CDUnknownBlockType *)arg2;
- (void)displayAvatarForRecord:(id)arg1 animated:(_Bool)arg2;
- (void)transitionStaticViewToFront;
- (id)liveView;
- (void)transitionLiveViewToFront;
- (void)applyFullAlpha;
- (void)applyBaseAlpha;
- (void)updateImageViewWithDisplayedRecord;
- (void)transitionToShowingDisplayedRecordWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateImageViewWithAVTViewSnapshot;
- (void)transitionToOtherDisplayedRecord;

@end
