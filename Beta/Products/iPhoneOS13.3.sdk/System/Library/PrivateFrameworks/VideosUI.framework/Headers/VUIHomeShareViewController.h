/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIHomeShareViewController : VUILibraryStackViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    <VUIHomeShareViewControllerDelegate> * _delegate;
    NSArray * _homeShares;
    VUILibraryMenuItemViewCell * _menuItemSizingCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIHomeShareViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *homeShares;
@property (nonatomic, retain) VUILibraryMenuItemViewCell *menuItemSizingCell;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (id)_deviceMediaLibrary;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureWithCollectionView:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)homeShares;
- (id)initWithMediaLibrary:(id)arg1;
- (void)loadView;
- (id)menuItemSizingCell;
- (void)setDelegate:(id)arg1;
- (void)setHomeShares:(id)arg1;
- (void)setMenuItemSizingCell:(id)arg1;
- (void)start;
- (void)viewWillAppear:(bool)arg1;

@end