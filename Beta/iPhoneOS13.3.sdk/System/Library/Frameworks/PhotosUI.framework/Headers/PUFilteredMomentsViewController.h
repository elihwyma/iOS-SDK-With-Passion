/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosGridViewController.h>

@class NSString, PUFilteredMomentsDataSource;

__attribute__((visibility("hidden")))
@interface PUFilteredMomentsViewController : PUPhotosGridViewController

{
    PUFilteredMomentsDataSource *_filteredMomentsDataSource;
    NSString *_emptyPlaceholderText;
    long long _gridPresentationContext;
}

@property (retain, nonatomic) PUFilteredMomentsDataSource *filteredMomentsDataSource;
@property (retain, nonatomic) NSString *emptyPlaceholderText;
@property (nonatomic) long long gridPresentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)newGridLayout;
- (void)didTapHeaderView:(id)arg1;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (void)filteredMomentsDataSourceHasPendingChanges:(id)arg1;
- (void)headerView:(id)arg1 actionButtonPressed:(id)arg2;
- (void)_reloadVisibleMomentHeaders;
- (void)_getDataForVisualSection:(long long)arg1 hasActionButton:(_Bool *)arg2 actionButtonTitle:(id *)arg3 hasDisclosure:(_Bool *)arg4 locations:(id *)arg5 title:(id *)arg6 startDate:(id *)arg7 endDate:(id *)arg8;
- (void)setSelected:(_Bool)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(_Bool)arg4;
- (id)newEmptyPlaceholderView;
- (_Bool)allowSlideshowButton;
- (long long)oneUpPresentationOrigin;

@end
