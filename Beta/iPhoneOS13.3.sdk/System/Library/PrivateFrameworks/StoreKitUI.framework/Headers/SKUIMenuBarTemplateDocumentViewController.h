/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSMutableDictionary, NSString, SKUIDynamicPageSectionIndexMapper, SKUIHorizontalScrollingContainerViewController, SKUILoadingDocumentViewController, SKUIMenuBarSectionsViewController, SKUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost, SKUIMenuBarTemplateElement, SKUIMenuBarViewElementConfiguration, SKUIMenuItemViewElement, SKUIScrollingSegmentedController, SKUIViewElement, UIScrollView, UIView;

@protocol SKUIMenuBarViewElement;

__attribute__((visibility("hidden")))
@interface SKUIMenuBarTemplateDocumentViewController : SKUIViewController

{
    SKUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost *_embeddedPaletteHost;
    SKUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;
    NSMutableDictionary *_entityUniqueIdentifierToEntityIndex;
    SKUIHorizontalScrollingContainerViewController *_horizontalScrollingContainerViewController;
    SKUILoadingDocumentViewController *_loadingDocumentViewController;
    SKUIMenuBarSectionsViewController *_menuBarSectionsViewController;
    long long _menuBarStyle;
    SKUIViewElement<SKUIMenuBarViewElement> *_menuBarViewElement;
    SKUIMenuBarViewElementConfiguration *_menuBarViewElementConfiguration;
    SKUIMenuItemViewElement *_pendingSelectedMenuItemViewElement;
    SKUIScrollingSegmentedController *_scrollingSegmentedController;
    CDStruct_19149c72 _scrollingTabAppearanceStatus;
    SKUIMenuBarTemplateElement *_templateElement;
}

@property (nonatomic, readonly) UIView *titleView;
@property (nonatomic, readonly) double titleViewHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIScrollView *scrollingTabNestedPagingScrollView;

- (void)dealloc;
- (void)setOperationQueue:(id)arg1;
- (void)viewDidLoad;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (id)_contentViewController;
- (id)contentScrollView;
- (void)_replaceViewControllerAtIndex:(unsigned long long)arg1 withViewController:(id)arg2;
- (void)setClientContext:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (id)_colorScheme;
- (id)navigationPaletteView;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (id)_dynamicPageSectionIndexMapper;
- (id)initWithTemplateElement:(id)arg1;
- (void)menuBarViewElementConfiguration:(id)arg1 didReplaceDocumentForEntityUniqueIdentifier:(id)arg2;
- (void)menuBarViewElementConfiguration:(id)arg1 didReplaceDocumentForMenuItemAtIndex:(unsigned long long)arg2;
- (void)menuBarViewElementConfiguration:(id)arg1 selectMenuItemViewElement:(id)arg2 animated:(_Bool)arg3;
- (void)_reloadContentViewController;
- (void)_removeContentViewController:(id)arg1;
- (_Bool)_isFirstViewControllerOnNavigationStack;
- (void)_willDisplayViewControllerAtIndex:(unsigned long long)arg1;
- (void)_recordEntityUniqueIdentifier:(id)arg1 forEntityIndex:(unsigned long long)arg2;
- (id)_newChildViewControllerForEntityAtIndex:(unsigned long long)arg1;
- (void)scrollingTabAppearanceStatusWasUpdated:(CDStruct_19149c72)arg1;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1;
- (unsigned long long)_menuItemIndexForEntityIndex:(unsigned long long)arg1 entityValueProvider:(out id *)arg2;
- (id)_childViewControllersForMenuItems;
- (id)_zoomingShelfPageSplitsDescription;
- (void)_addContentViewController:(id)arg1;
- (void)horizontalScrollingContainerViewController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2;
- (id)navigationBarControllerWithViewElement:(id)arg1;

@end
