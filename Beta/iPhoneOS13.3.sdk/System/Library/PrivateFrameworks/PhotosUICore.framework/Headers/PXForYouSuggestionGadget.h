/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXForYouSuggestionGadgetContentView, PXGadgetSpec, PXRegionOfInterest, PXUIMediaProvider, UIImage;

@protocol PXDisplayAsset, PXDisplaySuggestion, PXForYouSuggestionGadgetDelegate;

@interface PXForYouSuggestionGadget : NSObject

{
    _Bool _contentHidden;
    _Bool _blursDegradedContent;
    _Bool _contentViewVisible;
    unsigned short _suggestionType;
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXForYouSuggestionGadgetDelegate> _delegate;
    id <PXDisplaySuggestion> _suggestion;
    PXUIMediaProvider *_mediaProvider;
    id <PXDisplayAsset> _keyAsset;
    PXForYouSuggestionGadgetContentView *_contentView;
    NSString *_title;
    NSString *_subtitle;
    struct CGSize _cachedHeightForWidth;
    struct CGRect _visibleContentRect;
}

@property (retain, nonatomic) PXUIMediaProvider *mediaProvider;
@property (retain, nonatomic) id <PXDisplayAsset> keyAsset;
@property (nonatomic) struct CGSize cachedHeightForWidth;
@property (retain, nonatomic) PXForYouSuggestionGadgetContentView *contentView;
@property (nonatomic) _Bool contentViewVisible;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned short suggestionType;
@property (retain, nonatomic) id <PXDisplaySuggestion> suggestion;
@property (weak, nonatomic) id <PXForYouSuggestionGadgetDelegate> delegate;
@property (nonatomic, getter=isContentHidden) _Bool contentHidden;
@property (nonatomic, readonly) UIImage *currentImage;
@property (nonatomic) _Bool blursDegradedContent;
@property (nonatomic, readonly) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
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

+ (void)preloadResources;
+ (id)fetchQueue;

- (id)init;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)debugDictionary;
- (void)commitPreviewViewController:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (id)initWithSuggestion:(id)arg1;
- (void)_updateTitleAndSubtitle;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (struct NSObject *)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(struct NSObject *)arg2;
- (void)contentViewWillAppear;
- (void)contentViewDidDisappear;
- (id)debugURLsForDiagnostics;
- (id)uniqueGadgetIdentifier;
- (void)contentHasBeenSeen;
- (void)gadgetControllerHasAppeared;
- (struct NSObject *)targetPreviewViewForLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)_updateContentViewMode;
- (id)_contentViewIfLoaded;
- (void)_handleContentViewTap:(id)arg1;
- (void)_handleDismiss;
- (void)_markSuggestionAsActive;
- (void)_markSuggestionAsDeclined;
- (void)_updateKeyAsset;

@end
