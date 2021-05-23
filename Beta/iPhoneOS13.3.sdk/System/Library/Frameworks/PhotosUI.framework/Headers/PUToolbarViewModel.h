/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModel.h>

@class NSArray, PUToolbarViewModelChange, UIView, UIViewController;

@interface PUToolbarViewModel : PUViewModel

{
    _Bool _needsToUpdateToolbarSize;
    NSArray *_toolbarItems;
    UIView *_accessoryView;
    double _accessoryViewTopOutset;
    double _accessoryViewMaximumHeight;
    double _maximumHeight;
    UIViewController *__viewController;
}

@property (nonatomic, readonly) PUToolbarViewModelChange *currentChange;
@property (weak, nonatomic, setter=_setViewController:) UIViewController *_viewController;
@property (nonatomic) _Bool needsToUpdateToolbarSize;
@property (copy, nonatomic) NSArray *toolbarItems;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) double accessoryViewTopOutset;
@property (nonatomic) double accessoryViewMaximumHeight;
@property (nonatomic) double maximumHeight;

- (void)didPublishChanges;
- (id)newViewModelChange;

@end
