/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, PHPerson, UICollectionView, UIImage;

@interface PXPeopleDetailSettingsSuggestionViewController : UIViewController <Swift>

{
    PHPerson *_person;
    UICollectionView *_collectionView;
    NSArray *_detailSettingsDataSources;
    UIImage *_image;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain) NSArray *detailSettingsDataSources;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) PHPerson *person;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)initWithPerson:(id)arg1;
- (void)loadDataSource;

@end
