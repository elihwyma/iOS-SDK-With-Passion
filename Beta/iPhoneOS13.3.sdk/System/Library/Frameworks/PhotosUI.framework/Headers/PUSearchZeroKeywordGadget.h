/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewController.h>

@class NSObject, NSString, PHCachingImageManager, PUSearchHomeThumbnailManager, PUSearchZeroKeywordDataSource, PUSearchZeroKeywordGadgetLayout, PXGadgetSpec;

@protocol OS_dispatch_queue, PXGadgetDelegate;

@interface PUSearchZeroKeywordGadget : UICollectionViewController

{
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    PXGadgetSpec *_gadgetSpec;
    unsigned long long _placeTileFetchCounter;
    PUSearchZeroKeywordDataSource *_zeroKeywordDataSource;
    unsigned long long _dataSourceSection;
    long long _sectionType;
    PUSearchHomeThumbnailManager *_thumbnailManager;
    unsigned long long _cellLabelNumberOfLinesPermitted;
    NSObject<OS_dispatch_queue> *_placeTileFetchCounterQueue;
    PHCachingImageManager *_imageManager;
}

@property (retain, nonatomic) PUSearchHomeThumbnailManager *thumbnailManager;
@property (nonatomic, readonly) PUSearchZeroKeywordGadgetLayout *zeroKeywordGadgetLayout;
@property (nonatomic) unsigned long long cellLabelNumberOfLinesPermitted;
@property (nonatomic) unsigned long long placeTileFetchCounter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *placeTileFetchCounterQueue;
@property (retain, nonatomic) PHCachingImageManager *imageManager;
@property (nonatomic, readonly) PUSearchZeroKeywordDataSource *zeroKeywordDataSource;
@property (nonatomic, readonly) unsigned long long dataSourceSection;
@property (nonatomic, readonly) long long sectionType;
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

- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct NSObject *)contentViewController;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (_Bool)hasLoadedContentData;
- (id)debugURLsForDiagnostics;
- (id)initWithDataSource:(id)arg1 dataSourceSection:(unsigned long long)arg2 sectionType:(long long)arg3;
- (void)_configureCollectionView;
- (void)_configureCellLabelNumberOfLinesWithScreenSize:(struct CGSize)arg1;
- (void)_fetchPlaceThumbnailForCell:(id)arg1 itemType:(long long)arg2 key:(id)arg3 currentTag:(unsigned long long)arg4;
- (void)_updateCurrentContentOffsetWithProposedOffset:(struct CGPoint)arg1;
- (struct CGSize)getCellSize;
- (struct CGSize)getCellSizeWithScreenWidth:(double)arg1;
- (struct CGSize)getCellThumbnailSize;
- (void)layoutPeopleViews;
- (void)updateCellLabelNumberOfLinesWithScreenSize:(struct CGSize)arg1;

@end
