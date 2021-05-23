/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class PXCuratedLibraryViewModel, PXGLayout;

@interface PXCuratedLibraryActionViewController : UIViewController

{
    PXCuratedLibraryViewModel *_viewModel;
    PXGLayout *_layout;
}

@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;
@property (nonatomic, readonly) PXGLayout *layout;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithViewModel:(id)arg1 layout:(id)arg2;

@end
