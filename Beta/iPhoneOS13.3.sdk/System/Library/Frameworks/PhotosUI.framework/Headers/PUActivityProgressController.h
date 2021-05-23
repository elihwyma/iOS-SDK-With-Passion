/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSProgress, NSString, PUActivityProgressViewController, UIAlertController, UIView;

__attribute__((visibility("hidden")))
@interface PUActivityProgressController : NSObject

{
    PUActivityProgressViewController *_progressViewController;
    UIAlertController *_alertController;
    UIView *_containerView;
    UIView *_dimmingView;
    UIView *_progressContainerView;
    double _whenDidShow;
    _Bool _didShow;
    _Bool _didHide;
    NSString *_title;
    CDUnknownBlockType _cancellationHandler;
    NSProgress *_progress;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) CDUnknownBlockType cancellationHandler;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic, readonly) _Bool isCancelled;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setFractionCompleted:(double)arg1;
- (void)_updateFractionCompletedFromProgress;
- (id)_newProgressContainerView;
- (void)showAnimated:(_Bool)arg1 allowDelay:(_Bool)arg2;
- (void)hideAnimated:(_Bool)arg1 allowDelay:(_Bool)arg2;

@end
