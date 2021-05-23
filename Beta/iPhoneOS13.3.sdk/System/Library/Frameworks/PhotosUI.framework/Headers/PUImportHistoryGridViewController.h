/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosGridViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSNumber, NSString, PHFetchResult, PLDateRangeFormatter, PUImportHistorySectionHeaderView;

@interface PUImportHistoryGridViewController : PUPhotosGridViewController <Swift>

{
    PHFetchResult *_importSessions;
    PLDateRangeFormatter *_dateFormatter;
    double _referenceWidth;
    NSNumber *_cachedHeaderHeight;
    PUImportHistorySectionHeaderView *_referenceHeaderView;
}

@property (retain, nonatomic) PHFetchResult *importSessions;
@property (nonatomic, readonly) PLDateRangeFormatter *dateFormatter;
@property (nonatomic) double referenceWidth;
@property (retain, nonatomic) NSNumber *cachedHeaderHeight;
@property (retain, nonatomic) PUImportHistorySectionHeaderView *referenceHeaderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithSpec:(id)arg1;
- (id)newGridLayout;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (void)setSelected:(_Bool)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(_Bool)arg4;
- (_Bool)allowSlideshowButton;
- (long long)oneUpPresentationOrigin;
- (void)headerViewDidPressActionButton:(id)arg1;
- (_Bool)initiallyScrolledToBottom;
- (_Bool)shouldPerformAutomaticContentOffsetAdjustment;
- (void)_importHistoryContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_configureSectionHeaderView:(id)arg1 section:(long long)arg2;

@end
