/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewController.h>

@class NSIndexPath, NSString, PHCollection, PUImportAddToAlbumsPickerCell, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager, PXPhotoKitCollectionsDataSourceManagerConfiguration;

@protocol PXImportAlbumPickerDelegate;

__attribute__((visibility("hidden")))
@interface PUImportAddToAlbumsPickerViewController : UITableViewController

{
    PHCollection *_selectedCollection;
    NSIndexPath *_selectedIndex;
    PUImportAddToAlbumsPickerCell *_selectedCell;
    PHCollection *_createdAlbum;
    _Bool _needsDatasourceUpdate;
    PXPhotoKitCollectionsDataSourceManagerConfiguration *_dataSourceManagerConfiguration;
    id <PXImportAlbumPickerDelegate> _delegate;
    PXPhotoKitCollectionsDataSource *_dataSource;
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;
}

@property (retain, nonatomic) PXPhotoKitCollectionsDataSource *dataSource;
@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManagerConfiguration *dataSourceManagerConfiguration;
@property (weak, nonatomic) id <PXImportAlbumPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)dataSourceOffset;
+ (id)dataSourceShiftedIndexPath:(id)arg1;
+ (unsigned long long)cellTypeForPosition:(id)arg1;
+ (id)userCreatredAlbumsPhotoKitConfiguration;

- (id)init;
- (CDUnknownBlockType)completionHandler;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)hostViewContoller;
- (_Bool)canPresentPicker;
- (id)albumListViewControllerSpec;
- (void)updateDatasource;
- (double)_heightForIndex:(id)arg1;
- (void)_selectCell:(id)arg1;
- (id)posterImageForCollection:(id)arg1 cell:(id)arg2 forCellType:(unsigned long long)arg3;
- (id)addAlbumPlaceHolder:(struct CGSize)arg1 newAlbum:(_Bool)arg2;
- (void)selectCollection:(id)arg1;
- (void)configureDataSourceManagerConfiguration:(id)arg1;
- (id)createAlbumListViewController;
- (void)_handleCreateAlbum;
- (void)_dismissPicker;

@end
