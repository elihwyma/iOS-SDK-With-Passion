/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class PXMemoriesDataSourceManager, PXMemoriesUIViewController;

@interface PXMemoriesTVViewController : UIViewController

{
    PXMemoriesUIViewController *_memoriesController;
    PXMemoriesDataSourceManager *_dataSourceManager;
}

- (void)viewDidLoad;
- (id)initWithDataSourceManager:(id)arg1;

@end
