/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableArray, NSString, TVImageProxy, UIAlertController;

__attribute__((visibility("hidden")))
@interface _TVAlertTemplateController_iOS : UIViewController

{
    NSMutableArray *_additionalLabels;
    UIAlertController *_alertController;
    NSArray *_buttonElements;
    TVImageProxy *_imageProxy;
    struct CGSize _imageSize;
    NSString *_message;
    NSString *_title;
}

- (void)viewWillDisappear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)updateWithTemplateElement:(id)arg1;
- (void)_presentAlertController;
- (void)_dismissAlertControllerAnimated:(_Bool)arg1;

@end
