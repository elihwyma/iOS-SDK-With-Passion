/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, PHMemory, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec;

@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXMemoriesLivingOnFeedbackWidget : NSObject <Swift>

{
    _Bool _hasLoadedContentData;
    PXPhotosDetailsContext *_context;
    struct NSObject *_contentView;
    id <PXWidgetDelegate> _widgetDelegate;
    NSArray *_features;
    NSArray *_featureViews;
    PHMemory *_memory;
}

@property (retain, nonatomic) NSArray *features;
@property (retain, nonatomic) NSArray *featureViews;
@property (retain, nonatomic) PHMemory *memory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id <PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (nonatomic, readonly) _Bool hasContentForCurrentInput;
@property (nonatomic, readonly) _Bool hasLoadedContentData;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) _Bool allowUserInteractionWithSubtitle;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, getter=isSelecting) _Bool selecting;
@property (nonatomic, readonly) _Bool supportsFaceMode;
@property (nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;

- (double)preferredContentHeightForWidth:(double)arg1;
- (void)loadContentData;
- (void)unloadContentData;
- (void)userDidSelectDisclosureControl;
- (struct NSObject *)_loadContentView;
- (void)_loadContentData;
- (void)_loadFeaturesFromPhotosGraphProperties:(id)arg1;
- (id)_tokenViewsWithSuperview:(struct NSObject *)arg1;
- (struct CGSize)_layoutTokenViewsWithWidth:(double)arg1;
- (void)_showReportFeedback;

@end
