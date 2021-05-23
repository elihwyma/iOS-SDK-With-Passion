/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSMutableDictionary, NSString, PXGadgetSpec, PXMemoriesFeedWidgetDataSourceManager;

@protocol PXGadgetDelegate, PXUIViewControllerZoomTransitionEndPoint;

@interface PXMemoryRowGadget : UIViewController <Swift>

{
    CDStruct_d97c9657 _updateFlags;
    _Bool _hasAppeared;
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    PXMemoriesFeedWidgetDataSourceManager *_dataSourceManager;
    NSMutableDictionary *_viewControllerEntries;
    long long _currentVisibility;
    id <PXUIViewControllerZoomTransitionEndPoint> _currentTransitionEndPoint;
    unsigned long long _currentNumberOfColumns;
}

@property (nonatomic, readonly) PXMemoriesFeedWidgetDataSourceManager *dataSourceManager;
@property (retain, nonatomic) NSMutableDictionary *viewControllerEntries;
@property (nonatomic) long long currentVisibility;
@property (retain, nonatomic) id <PXUIViewControllerZoomTransitionEndPoint> currentTransitionEndPoint;
@property (nonatomic) unsigned long long currentNumberOfColumns;
@property (nonatomic) _Bool hasAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool keepsSourceRegionOfInterestContent;
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

+ (struct _NSRange)dataSourceRangeForRowType:(unsigned long long)arg1 currentVisibility:(long long)arg2;
+ (unsigned long long)numberOfColumnsForCurrentVisibility:(long long)arg1 rowType:(unsigned long long)arg2 numberOfMemories:(unsigned long long)arg3;
+ (long long)visibilityForGadgetSpec:(id)arg1 numberOfMemories:(unsigned long long)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (struct NSObject *)contentViewController;
- (void)_updateVisibilityIfNeeded;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (id)initWithDataSourceManager:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)userDidSelectAccessoryButton:(struct NSObject *)arg1;
- (void)gadgetControllerHasAppeared;
- (void)gadgetControllerHasDisappeared;
- (_Bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (void)forYouMemoriesViewController:(id)arg1 transitionToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)forYouMemoriesViewController:(id)arg1 configureMetrics:(id)arg2;
- (void)_dismissIfNeeded;
- (void)_updateNumberOfColumnsIfNeeded;
- (void)_updateScrollingBehaviorIfNeeded;
- (id)showAllMemoriesFeedAnimated:(_Bool)arg1;
- (void)_configureMetricsForSingleRow:(id)arg1 dataSourceRange:(struct _NSRange)arg2;
- (void)_configureMetricsForMultiRow:(id)arg1 dataSourceRange:(struct _NSRange)arg2;
- (void)_transitionFromCurrentVisibility:(long long)arg1 toNewVisibility:(long long)arg2;
- (void)_fillViewControllerEntryForRowType:(unsigned long long)arg1;
- (void)_refreshViewControllerForRowType:(unsigned long long)arg1 visibility:(long long)arg2;
- (void)_removeViewControllerEntryForRowType:(unsigned long long)arg1;
- (void)_updateScrollingBehaviorForRowType:(unsigned long long)arg1;
- (_Bool)_shouldPageForRowType:(unsigned long long)arg1;
- (struct CGRect)_frameForRowType:(unsigned long long)arg1 inRect:(struct CGRect)arg2;
- (long long)_columnSpanForRowType:(unsigned long long)arg1;

@end
