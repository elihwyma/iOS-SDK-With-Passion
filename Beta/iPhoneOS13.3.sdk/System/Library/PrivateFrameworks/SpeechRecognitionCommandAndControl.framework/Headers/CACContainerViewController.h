/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIViewController.h>

@class NSMutableArray, UIView;

@interface CACContainerViewController : UIViewController

{
    UIView *_viewAboveContainedViews;
    NSMutableArray *_viewControllers;
}

@property (retain, nonatomic) NSMutableArray *viewControllers;
@property (nonatomic, readonly) UIView *viewAboveContainedViews;

- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (void)installViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uninstallViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
