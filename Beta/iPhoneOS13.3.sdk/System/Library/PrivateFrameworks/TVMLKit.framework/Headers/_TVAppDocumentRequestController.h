/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVAppDocumentController.h>

#import <TVMLKit/Swift-Protocol.h>

@class IKDocumentServiceRequest, IKUpdateServiceRequest, NSString, TVMediaInfo, TVMediaPlaybackManager, TVObservableEventController, TVTemplateFeaturesManager, UIImage, UIViewController, _TVSwipeUpMessageView;

@protocol TVMediaController, TVMediaProviding, TVShowcasing;

@interface _TVAppDocumentRequestController : _TVAppDocumentController <Swift>

{
    struct {
        _Bool initialRequestSent;
        _Bool shouldHideUI;
    } _flags;
    struct {
        _Bool hasSelectedMediaInfoDidChange;
        _Bool hasDidHideUI;
        _Bool hasShowcaseFactorDidChange;
        _Bool hasDidCompleteDocumentCreation;
    } _adrcDelegateFlags;
    IKDocumentServiceRequest *_documentServiceRequest;
    UIViewController<TVMediaController> *_mediaController;
    TVMediaPlaybackManager *_mediaPlaybackManager;
    TVMediaInfo *_selectedMediaInfo;
    double _showcaseFactor;
    double _showcaseInset;
    TVTemplateFeaturesManager *_featuresManager;
    id <TVShowcasing> _showcasingController;
    id <TVMediaProviding> _mediaProvider;
    _TVSwipeUpMessageView *_swipeUpMessageView;
    TVObservableEventController *_observableEventController;
    IKUpdateServiceRequest *_updateServiceRequest;
}

@property (nonatomic, readonly) TVTemplateFeaturesManager *featuresManager;
@property (retain, nonatomic) TVMediaPlaybackManager *mediaPlaybackManager;
@property (weak, nonatomic) id <TVShowcasing> showcasingController;
@property (weak, nonatomic) id <TVMediaProviding> mediaProvider;
@property (retain, nonatomic) _TVSwipeUpMessageView *swipeUpMessageView;
@property (retain, nonatomic) TVObservableEventController *observableEventController;
@property (retain, nonatomic) IKUpdateServiceRequest *updateServiceRequest;
@property (nonatomic, readonly) IKDocumentServiceRequest *documentServiceRequest;
@property (retain, nonatomic) UIViewController<TVMediaController> *mediaController;
@property (nonatomic, readonly) TVMediaInfo *selectedMediaInfo;
@property (nonatomic, readonly) double showcaseFactor;
@property (nonatomic, readonly) _Bool isUIHidden;
@property (nonatomic) double showcaseInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIImage *coverImage;
@property (nonatomic, readonly) _Bool isPlaying;

- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)documentDidChangeForDocumentServiceRequest:(id)arg1;
- (void)serviceRequest:(id)arg1 didCompleteWithStatus:(long long)arg2 errorDictionary:(id)arg3;
- (void)setAppDelegate:(id)arg1;
- (id)relinquishOwnership;
- (void)adoptMediaController:(id)arg1;
- (id)initWithDocumentServiceRequest:(id)arg1;
- (void)didChangeDocumentContext;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;
- (void)willHostTemplateViewController:(id)arg1 usesTransitions:(_Bool *)arg2;
- (_Bool)tv_handleEventForDocument:(id)arg1 eventName:(id)arg2 targetResponder:(id)arg3 viewElement:(id)arg4 extraInfo:(id *)arg5;
- (id)tv_featuresManagerForDocument:(id)arg1;
- (id)tv_interactionPreviewControllerForViewController:(id)arg1 presentingView:(id)arg2 presentingElement:(id)arg3;
- (id)initWithAppDocument:(id)arg1;
- (void)addObserver:(id)arg1 forEvent:(id)arg2;
- (void)removeObserver:(id)arg1 forEvent:(id)arg2;
- (void)handleEvent:(id)arg1 sender:(id)arg2 withUserInfo:(id)arg3;
- (void)evaluateSwipeUpMessageForMediaPlaybackManager:(id)arg1;
- (void)mediaPlaybackManager:(id)arg1 shouldHideUI:(_Bool)arg2 animated:(_Bool)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(_Bool)arg2;
- (void)_updateShowcaseFactor;
- (void)_updateMediaInfo;
- (void)_hostMediaControllerIfPossible;
- (void)shouldHideSupplementaryUI:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_hostingFocusEnvironment;
- (void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2;
- (_Bool)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id *)arg4;
- (id)interactionPreviewControllerForViewController:(id)arg1 presentingView:(id)arg2 presentingElement:(id)arg3;
- (void)mediaInfoDidChange;
- (void)showcaseFactorDidChange;
- (void)featuresManager:(id)arg1 currentContextDidChangeForFeature:(id)arg2;
- (void)coverImageDidChangeForMediaController:(id)arg1;
- (void)stateDidChangeForMediaController:(id)arg1;
- (void)sendInitialRequestIfNeeded;
- (_Bool)automaticallyProvidesMediaController;

@end
