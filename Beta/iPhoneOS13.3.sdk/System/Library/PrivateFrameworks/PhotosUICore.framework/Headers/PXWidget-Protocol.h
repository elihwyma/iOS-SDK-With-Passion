/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSObject, NSString, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec;

@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@protocol PXWidget <Swift>

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

+ (unsigned short)preloadResources;

- (unsigned short)context;
- (unsigned short)setContext: /* Error: Ran out of types for this method. */;
- (unsigned short)localizedTitle;
- (unsigned short)setContentSize: /* Error: Ran out of types for this method. */;
- (unsigned short)contentView;
- (unsigned short)setUserInteractionEnabled: /* Error: Ran out of types for this method. */;
- (unsigned short)isUserInteractionEnabled;
- (unsigned short)localizedSubtitle;
- (unsigned short)isSelecting;
- (unsigned short)setSelecting: /* Error: Ran out of types for this method. */;
- (unsigned short)setSpec: /* Error: Ran out of types for this method. */;
- (unsigned short)spec;
- (unsigned short)supportsSelection;
- (unsigned short)localizedCaption;
- (unsigned short)preferredContentHeightForWidth: /* Error: Ran out of types for this method. */;
- (unsigned short)loadContentData;
- (unsigned short)unloadContentData;
- (unsigned short)contentViewWillAppear;
- (unsigned short)contentViewDidDisappear;
- (unsigned short)contentViewWillTransitionToSize:withTransitionCoordinator: /* Error: Ran out of types for this method. */;
- (unsigned short)userDidSelectSubtitle;
- (unsigned short)userDidSelectDisclosureControl;
- (unsigned short)deviceDidBecomeUnlocked;
- (unsigned short)widgetDelegate;
- (unsigned short)setWidgetDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)widgetUnlockDelegate;
- (unsigned short)setWidgetUnlockDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)hasContentForCurrentInput;
- (unsigned short)hasLoadedContentData;
- (unsigned short)contentViewAnchoringType;
- (unsigned short)contentTilingController;
- (unsigned short)contentLayoutStyle;
- (unsigned short)localizedDisclosureTitle;
- (unsigned short)allowUserInteractionWithSubtitle;
- (unsigned short)supportsFaceMode;
- (unsigned short)isFaceModeEnabled;
- (unsigned short)setFaceModeEnabled: /* Error: Ran out of types for this method. */;
- (unsigned short)selectionManager;

@end
