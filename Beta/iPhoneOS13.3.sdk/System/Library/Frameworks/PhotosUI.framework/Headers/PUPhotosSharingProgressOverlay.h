/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingProgressOverlay : UIView

{
    _Bool _isShowing;
    UIView *_progressView;
    UIWindow *_cachedMainWindow;
}

@property (retain, nonatomic) UIView *progressView;
@property (weak, nonatomic) UIWindow *cachedMainWindow;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)willRemoveSubview:(id)arg1;
- (id)_mainWindow;
- (void)_installInStatusBarWindow;
- (id)_screenshotImage;
- (id)_grayScaleImageFromImage:(id)arg1;
- (void)_setupOverlayAnimated:(_Bool)arg1;
- (void)_tearDownOverlayAnimated:(_Bool)arg1;
- (void)addProgressView:(id)arg1;
- (void)setShowing:(_Bool)arg1 animated:(_Bool)arg2;

@end
