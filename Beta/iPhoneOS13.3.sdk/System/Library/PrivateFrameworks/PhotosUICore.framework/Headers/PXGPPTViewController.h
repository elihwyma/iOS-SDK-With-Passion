/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class PXGLayout, PXGView;

@interface PXGPPTViewController : UIViewController

{
    PXGView *_gridView;
    PXGLayout *_initialLayout;
}

@property (nonatomic, readonly) PXGLayout *initialLayout;
@property (nonatomic, readonly) PXGView *gridView;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (id)initWithLayout:(id)arg1;
- (void)_handleDoubleTap:(id)arg1;
- (void)animate:(CDUnknownBlockType)arg1 animationRenderingCompletionHandler:(CDUnknownBlockType)arg2 proceedHandler:(CDUnknownBlockType)arg3;

@end
