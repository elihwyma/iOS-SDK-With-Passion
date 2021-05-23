/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, PXScrollViewController, PXTilingController, PXWidgetBar, PXWidgetCompositionSpec;

@protocol PXWidget, PXWidgetCompositionElementDelegate;

@interface PXWidgetCompositionElement : NSObject

{
    struct {
        _Bool respondsToTransitionToViewControllerPreferredTransitionType;
        _Bool respondsToRequestViewControllerDismissalAnimated;
    } _delegateFlags;
    _Bool _isPerformingChanges;
    _Bool _shouldLoadWidgetContent;
    _Bool __isNotifyingWidget;
    id <PXWidget> _widget;
    PXScrollViewController *_scrollViewController;
    id <PXWidgetCompositionElementDelegate> _delegate;
    PXWidgetCompositionSpec *_spec;
    PXTilingController *_animationOptionsOriginatingTilingController;
    NSHashTable *__observers;
    PXWidgetBar *__header;
    PXWidgetBar *__footer;
    struct CGSize _widgetContentSize;
}

@property (nonatomic, readonly) NSHashTable *_observers;
@property (nonatomic, readonly) PXWidgetBar *_header;
@property (nonatomic, readonly) PXWidgetBar *_footer;
@property (nonatomic, setter=_setNotifyingWidget:) _Bool _isNotifyingWidget;
@property (nonatomic, readonly) id <PXWidget> widget;
@property (weak, nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (weak, nonatomic) id <PXWidgetCompositionElementDelegate> delegate;
@property (retain, nonatomic) PXWidgetCompositionSpec *spec;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) PXTilingController *headerTilingController;
@property (nonatomic, readonly) PXTilingController *footerTilingController;
@property (nonatomic) struct CGSize widgetContentSize;
@property (nonatomic) _Bool shouldLoadWidgetContent;
@property (nonatomic, readonly) PXTilingController *animationOptionsOriginatingTilingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)elementWithWidget:(id)arg1 scrollViewController:(id)arg2;
+ (Class)headerBarClass;
+ (Class)footerBarClass;

- (id)init;
- (void)prepare;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)_updateHeader;
- (id)extendedTraitCollection;
- (void)_updateFooter;
- (void)_invalidateHeader;
- (void)saveAnchoring;
- (struct NSObject *)widgetViewHostingGestureRecognizers:(id)arg1;
- (id)widgetScrollViewControllerHostingWidget:(id)arg1;
- (struct NSObject *)widgetViewControllerHostingWidget:(id)arg1;
- (id)widgetExtendedTraitCollection:(id)arg1;
- (void)widget:(id)arg1 animateChanges:(CDUnknownBlockType)arg2 withAnimationOptions:(id)arg3;
- (void)widgetLocalizedTitleDidChange:(id)arg1;
- (void)widgetLocalizedSubtitleDidChange:(id)arg1;
- (void)widgetLocalizedCaptionDidChange:(id)arg1;
- (void)widgetLocalizedDisclosureTitleDidChange:(id)arg1;
- (void)widgetPreferredContentHeightForWidthDidChange:(id)arg1;
- (void)widgetHasLoadedContentDataDidChange:(id)arg1;
- (void)widgetRequestFocus:(id)arg1;
- (void)widgetInvalidateContentViewAnchoringType:(id)arg1;
- (void)widgetInvalidateContentLayoutStyle:(id)arg1;
- (long long)widgetDefaultContentViewAnchoringTypeForDisclosureHeightChange:(id)arg1;
- (_Bool)widget:(id)arg1 transitionToViewController:(struct NSObject *)arg2 withTransitionType:(long long)arg3;
- (_Bool)widget:(id)arg1 requestViewControllerDismissalAnimated:(_Bool)arg2;
- (void)widgetBarDidSelectSubtitle:(id)arg1;
- (void)widgetBarDidSelectDisclosureAffordance:(id)arg1;
- (id)initWithWidget:(id)arg1 scrollViewController:(id)arg2;
- (void)_notifyWidgetUsingBlock:(CDUnknownBlockType)arg1;
- (void)_performContentChangeWhenSafe:(CDUnknownBlockType)arg1;
- (void)_invalidateFooter;
- (void)_performChanges:(CDUnknownBlockType)arg1 withAnimationOptions:(id)arg2;

@end
