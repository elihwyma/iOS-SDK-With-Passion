/*
 Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

#import <UIKit/UIAlertController.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface MCAlertController : UIAlertController

{
    CDUnknownBlockType _viewWillAppearHandler;
    CDUnknownBlockType _viewDidDisappearHandler;
    UIWindow *_alertWindow;
}

@property (retain, nonatomic) UIWindow *alertWindow;
@property (copy, nonatomic) CDUnknownBlockType viewWillAppearHandler;
@property (copy, nonatomic) CDUnknownBlockType viewDidDisappearHandler;

- (void)dealloc;
- (void)show;
- (void)dismiss;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;

@end
