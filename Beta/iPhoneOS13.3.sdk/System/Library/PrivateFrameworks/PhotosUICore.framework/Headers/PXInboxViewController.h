/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDate, NSString, PXGadgetSpec, PXInboxAggregateDataSource, PXInboxAggregateDataSourceManager, PXInboxTableViewCellLayoutCoordinator, PXPhotoKitUIMediaProvider, UITableView;

@protocol PXGadgetDelegate, PXInboxModel, PXNavigableForYouViewController;

@interface PXInboxViewController : UIViewController <Swift>

{
    _Bool _hasContentToDisplay;
    _Bool _visible;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    unsigned long long _accessoryButtonType;
    PXGadgetSpec *_gadgetSpec;
    UITableView *_tableView;
    id <PXNavigableForYouViewController> _forYouNavigationDelegate;
    NSDate *_lastSeenDate;
    PXInboxAggregateDataSource *_dataSource;
    PXInboxAggregateDataSourceManager *_dataSourceManager;
    PXInboxTableViewCellLayoutCoordinator *_cellLayoutCoordinator;
    double _currentRowHeight;
    PXPhotoKitUIMediaProvider *_mediaProvider;
    id <PXInboxModel> _lastSelectedModel;
    struct _NSRange _dataSourceIndexRange;
    struct CGRect _visibleContentRect;
}

@property (nonatomic, readonly) UITableView *tableView;
@property (retain, nonatomic) PXInboxAggregateDataSource *dataSource;
@property (retain, nonatomic) PXInboxAggregateDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PXInboxTableViewCellLayoutCoordinator *cellLayoutCoordinator;
@property (nonatomic) double currentRowHeight;
@property (retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider;
@property (retain, nonatomic) id <PXInboxModel> lastSelectedModel;
@property (nonatomic, getter=isVisible) _Bool visible;
@property (weak, nonatomic) id <PXNavigableForYouViewController> forYouNavigationDelegate;
@property (nonatomic) struct _NSRange dataSourceIndexRange;
@property (retain, nonatomic) NSDate *lastSeenDate;
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

+ (void)preloadResources;
+ (id)createInboxDataSourceManager;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct NSObject *)contentViewController;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned long long)_numberOfRows;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (double)_dividerHeight;
- (id)initWithDataSourceManager:(id)arg1;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)gadgetControllerHasAppeared;
- (void)_updateTableViewFrameAndBounds;
- (id)_createDividerView;
- (id)_createTransparentFullWidthViewOfHeight:(double)arg1;
- (struct PXSimpleIndexPath)_dataSourceIndexPathFromTableViewIndexPath:(id)arg1;
- (id)_tableViewIndexPathFromDataSourceIndexPath:(struct PXSimpleIndexPath)arg1;
- (_Bool)_shouldHandleAllIndexes;
- (void)_dismissDetailViewsIfNeededWithPreviousDataSource:(id)arg1;
- (_Bool)_isModelUnseen:(id)arg1;
- (void)_updateSeenState;
- (void)_startOneUpPresentationForModel:(id)arg1;
- (void)ppt_performBlockAfterLoadingCompletes:(CDUnknownBlockType)arg1;

@end
