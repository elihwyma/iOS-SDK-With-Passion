/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PHFetchResult;

__attribute__((visibility("hidden")))
@interface PUImportSettingsHistoryDebugViewController : UICollectionViewController <Swift>

{
    PHFetchResult *_importSessions;
}

@property (retain, nonatomic) PHFetchResult *importSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_updateFlowLayout:(id)arg1 withBounds:(struct CGRect)arg2 traitCollection:(id)arg3;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)_reloadData;
- (void)_updateTitle;
- (void)photoLibraryDidChange:(id)arg1;
- (void)_scrollToBottom:(id)arg1;
- (id)_assetForIndexPath:(id)arg1;
- (id)_assetsForSection:(long long)arg1;

@end
