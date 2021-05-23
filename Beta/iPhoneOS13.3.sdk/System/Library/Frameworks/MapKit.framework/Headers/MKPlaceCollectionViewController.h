/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKPlaceSectionHeaderView, NSDictionary, NSMutableDictionary, NSString;

@protocol MKCollectionViewProvider;

__attribute__((visibility("hidden")))
@interface MKPlaceCollectionViewController : MKPlaceSectionViewController

{
    NSDictionary *_collectionViews;
    NSMutableDictionary *_sectionsViews;
    MKPlaceSectionHeaderView *_headerView;
    _Bool _shouldReloadCollection;
    id <MKCollectionViewProvider> _viewProvider;
}

@property (weak, nonatomic) id <MKCollectionViewProvider> viewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)sectionView:(id)arg1 didSelectHeader:(id)arg2;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)sectionView:(id)arg1 didDeselectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)sectionView:(id)arg1 didSelectFooter:(id)arg2;
- (void)reloadCollections;

@end
