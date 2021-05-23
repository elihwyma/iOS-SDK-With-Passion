/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUILibraryFetchControllerViewController.h>

@class NSSet, NSString, VUIDownloadViewController, VUILibraryCategoryMenuViewModel, VUILibrarySplitViewController;

__attribute__((visibility("hidden")))
@interface VUILibraryIpadMainViewController : VUILibraryFetchControllerViewController

{
    _Bool _areLocalMediaItemsAvailable;
    VUILibraryCategoryMenuViewModel *_categoryViewModel;
    NSSet *_validCategories;
    VUILibrarySplitViewController *_librarySplitViewController;
    VUIDownloadViewController *_downloadViewController;
}

@property (nonatomic) _Bool areLocalMediaItemsAvailable;
@property (retain, nonatomic) VUILibraryCategoryMenuViewModel *categoryViewModel;
@property (retain, nonatomic) NSSet *validCategories;
@property (retain, nonatomic) VUILibrarySplitViewController *librarySplitViewController;
@property (retain, nonatomic) VUIDownloadViewController *downloadViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)_accountsChanged:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1;
- (id)_deviceMediaLibrary;
- (void)_addMediaLibraryNotificationObservers;
- (void)_removeMediaLibraryNotificationObservers;
- (void)categoryViewModel:(id)arg1 fetchDidCompleteWithCategories:(id)arg2 error:(id)arg3;
- (void)categoryViewModel:(id)arg1 categoriesDidChange:(id)arg2;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (_Bool)vui_ppt_isLoading;
- (void)_updateVisibleViewControllerForCategories:(id)arg1 error:(id)arg2;
- (void)_deviceMediaLibraryUpdateStateDidChange:(id)arg1;
- (_Bool)_isDeviceMediaLibraryInitialUpdateInProgress;
- (void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
- (void)_startMonitoringDeviceMediaLibraryInitialUpdate;
- (void)_setupDownloadViewController;
- (void)librarySplitViewControllerShouldDismiss:(id)arg1;

@end
