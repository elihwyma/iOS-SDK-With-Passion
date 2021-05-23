/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosGridViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PUSearchGridDataSource;

__attribute__((visibility("hidden")))
@interface PUSearchGridViewController : PUPhotosGridViewController <Swift>

{
    PUSearchGridDataSource *_searchGridDataSource;
    NSString *_emptyPlaceholderText;
}

@property (retain, nonatomic) PUSearchGridDataSource *searchGridDataSource;
@property (copy, nonatomic) NSString *emptyPlaceholderText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_subtitle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)pu_handleSecondTabTap;
- (long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg1;
- (id)newGridLayout;
- (void)didTapHeaderView:(id)arg1;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (_Bool)updateSpec;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (id)newEmptyPlaceholderView;
- (_Bool)allowSlideshowButton;
- (long long)oneUpPresentationOrigin;
- (struct UIEdgeInsets)fullMomentsLevelSectionHeaderHighlightInset;
- (void)searchGridDataSourceHasPendingChanges:(id)arg1;
- (void)_getDataForVisualSection:(long long)arg1 locations:(id *)arg2 title:(id *)arg3 startDate:(id *)arg4 endDate:(id *)arg5;
- (void)_updateNavigationTitleView;
- (_Bool)_containsScene;

@end
