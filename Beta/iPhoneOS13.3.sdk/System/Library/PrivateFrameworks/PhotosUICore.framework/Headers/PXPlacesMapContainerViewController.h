/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSString, PXPlacesMapFetchResultViewController, UISegmentedControl;

@interface PXPlacesMapContainerViewController : UIViewController

{
    _Bool _gridControllerEditing;
    PXPlacesMapFetchResultViewController *_fetchResultViewController;
    UIViewController *_currentViewController;
    UISegmentedControl *_subviewControl;
}

@property (retain, nonatomic) UIViewController *currentViewController;
@property (retain, nonatomic) UISegmentedControl *subviewControl;
@property (nonatomic) _Bool gridControllerEditing;
@property (nonatomic, readonly) PXPlacesMapFetchResultViewController *fetchResultViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)loadView;
- (void)viewDidLoad;
- (void)setBarButtonItems:(id)arg1;
- (void)viewController:(id)arg1 updatedNavigationItem:(id)arg2 animated:(_Bool)arg3;
- (void)_switchChildViewControllerFrom:(id)arg1 to:(id)arg2;
- (void)subviewControlChanged:(id)arg1;
- (void)_resetNavigationItem;

@end
