/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXTranscriptBubbleViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSError, NSString, NSURL, PHFetchResult, PHMomentShare, PHPhotoLibrary, PXCMMPreviewAsset, PXCMMPreviewUIImageProvider, PXCMMSpecManager, PXCMMTranscriptBubbleStatusView, PXCMMTranscriptBubbleView, PXMomentShareStatusPresentation;

@protocol PXCMMTranscriptBubbleTouchDelegate, PXUIImageProvider;

@interface PXCMMTranscriptBubbleViewController : PXTranscriptBubbleViewController <Swift>

{
    PHPhotoLibrary *_photoLibrary;
    PHFetchResult *_backingFetchResult;
    PHFetchResult *_keyAssetFetch;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    long long _saveInProgressTotal;
    PXCMMTranscriptBubbleView *_bubbleView;
    PXCMMTranscriptBubbleStatusView *_errorStatusView;
    PXCMMTranscriptBubbleStatusView *_loadingStatusView;
    id <PXUIImageProvider> _mediaProvider;
    PXCMMSpecManager *_specManager;
    PXCMMPreviewAsset *_previewAsset;
    PXCMMPreviewUIImageProvider *_previewImageProvider;
    _Bool _readyForBubbleStateTransitions;
    _Bool _isSender;
    _Bool _isPending;
    _Bool _highlighted;
    NSURL *_url;
    id <PXCMMTranscriptBubbleTouchDelegate> _touchDelegate;
    long long _bubbleState;
    long long _targetState;
    NSError *_error;
}

@property (nonatomic) long long bubbleState;
@property (nonatomic) long long targetState;
@property (nonatomic, readonly) PHMomentShare *momentShare;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (retain, nonatomic) PXMomentShareStatusPresentation *momentShareStatusPresentation;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) _Bool isSender;
@property (nonatomic, readonly) _Bool isPending;
@property (weak, nonatomic) id <PXCMMTranscriptBubbleTouchDelegate> touchDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_registerPermanentFailureURL:(id)arg1;
+ (_Bool)_isPermanentFailureURL:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)_tapGesture:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (struct CGSize)contentSizeThatFits:(struct CGSize)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_panGesture:(id)arg1;
- (void)_updateContent;
- (struct CGSize)workaroundSizeForSize:(struct CGSize)arg1;
- (void)touchingUIGestureRecognizerWillBeginTouching:(id)arg1;
- (void)touchingUIGestureRecognizerWillEndTouching:(id)arg1;
- (id)initWithURL:(id)arg1 isSender:(_Bool)arg2 isPending:(_Bool)arg3;
- (id)_primaryDescription;
- (id)_secondaryDescription;
- (id)_debugStatusDescription;
- (_Bool)_canFetchAssetsFromMomentShare:(id)arg1;
- (id)_fetchKeyAssetsFromBackingCollection;
- (void)_fetchMomentShareFromNetworkURL:(id)arg1;
- (void)_momentShareURL:(id)arg1 fetchDidFailWithError:(id)arg2;
- (void)_autoAcceptMomentShareIfNeeded:(id)arg1;
- (void)_acceptMomentShareIfNeeded:(id)arg1;
- (void)_retryMomentShareFetch;
- (_Bool)_shouldNavigateToContent;
- (_Bool)_shouldRetryOnTap;
- (_Bool)_shouldOpenInSafari;
- (void)_doubleTapGesture:(id)arg1;
- (void)_longPressGesture:(id)arg1;
- (_Bool)_shouldShowContent;
- (void)_updateBubbleView;
- (void)_updateMomentShareStatusPresentation;
- (void)_updateBubbleState;
- (void)_ensureBubbleStateTransition;
- (void)_readyForStateTransition;

@end
