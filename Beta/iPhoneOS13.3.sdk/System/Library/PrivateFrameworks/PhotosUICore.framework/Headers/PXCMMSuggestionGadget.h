/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXCMMSuggestionView, PXCMMSuggestionViewModel, PXGadgetSpec, PXPersonFaceTileImageCombiner;

@protocol PXCMMSuggestion, PXCMMWorkflowPresenting, PXGadgetDelegate;

@interface PXCMMSuggestionGadget : NSObject

{
    id <PXCMMSuggestion> _suggestion;
    _Bool _didLoadSuggestion;
    PXCMMSuggestionViewModel *_suggestionViewModel;
    PXCMMSuggestionView *_suggestionView;
    struct CGSize _requestedPosterImageSize;
    double _requestedWidth;
    _Bool _didRequestCachingOfPosterImage;
    PXPersonFaceTileImageCombiner *_faceTileImageCombiner;
    PXGadgetSpec *_gadgetSpec;
    id <PXGadgetDelegate> _delegate;
    id <PXCMMWorkflowPresenting> _workflowPresenter;
}

@property (nonatomic, readonly) id <PXCMMWorkflowPresenting> workflowPresenter;
@property (retain, nonatomic) id <PXCMMSuggestion> suggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id <PXGadgetDelegate> delegate;
@property (nonatomic, readonly) _Bool hasContentToDisplay;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) _Bool supportsHighlighting;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, readonly) _Bool supportsAssetsDrop;
@property (nonatomic, readonly) Class collectionViewItemClass;
@property (nonatomic) struct CGRect visibleContentRect;

+ (id)_imageRequestOptions;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)commitPreviewViewController:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (struct NSObject *)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(struct NSObject *)arg2;
- (void)prepareCollectionViewItem:(struct UICollectionViewCell *)arg1;
- (id)uniqueGadgetIdentifier;
- (void)contentHasBeenSeen;
- (void)gadgetControllerHasAppeared;
- (void)prefetchDuringScrollingForWidth:(double)arg1;
- (struct NSObject *)targetPreviewViewForLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)initWithWorkflowPresenter:(id)arg1;
- (void)presentDetailViewAnimated:(_Bool)arg1;
- (void)_cachePosterImageWithWidth:(double)arg1;
- (void)_clearPosterImageCache;
- (void)suggestionViewSizeThatFitsDidChange:(id)arg1;
- (void)dynamicUserInterfaceTraitDidChange;
- (void)presentDetailViewForSuggestionView:(id)arg1 animated:(_Bool)arg2;
- (void)ppt_presentComposeRecipientViewAfterDelay:(double)arg1;
- (void)_loadSuggestionIfNecessary;
- (void)_updatePeopleSuggestionFaceTileImagesForPersons:(id)arg1 mutableViewModel:(id)arg2;
- (void)_setCombinedFaceTileImage:(id)arg1;
- (void)_presentDetailViewAnimated:(_Bool)arg1 pptConfigurationBlock:(CDUnknownBlockType)arg2;

@end
