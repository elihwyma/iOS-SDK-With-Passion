/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryActionViewController.h>

@class UILabel, UISegmentedControl;

@interface PXCuratedLibraryToggleAspectFitActionViewController : PXCuratedLibraryActionViewController

{
    UILabel *_label;
    UISegmentedControl *_segmentedControl;
    double _spacing;
}

- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)viewWillLayoutSubviews;
- (void)_handleSegmentedControl:(id)arg1;

@end
