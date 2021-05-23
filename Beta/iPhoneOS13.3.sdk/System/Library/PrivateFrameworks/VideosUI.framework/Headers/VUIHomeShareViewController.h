/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUILibraryStackViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class NSArray, NSString, VUILibraryMenuItemViewCell;

@protocol VUIHomeShareViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUIHomeShareViewController : VUILibraryStackViewController <Swift>

{
    id <VUIHomeShareViewControllerDelegate> _delegate;
    NSArray *_homeShares;
    VUILibraryMenuItemViewCell *_menuItemSizingCell;
}

@property (retain, nonatomic) NSArray *homeShares;
@property (retain, nonatomic) VUILibraryMenuItemViewCell *menuItemSizingCell;
@property (weak, nonatomic) id <VUIHomeShareViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)configureWithCollectionView:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1;
- (id)_deviceMediaLibrary;
- (void)_addMediaLibraryNotificationObservers;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;

@end
