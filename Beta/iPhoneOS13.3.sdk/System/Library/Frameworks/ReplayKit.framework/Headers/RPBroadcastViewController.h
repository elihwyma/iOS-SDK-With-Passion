/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <UIKit/UIViewController.h>

@class RPBroadcastHostViewController;

@protocol RPBroadcastViewControllerDelegate;

@interface RPBroadcastViewController : UIViewController

{
    id <RPBroadcastViewControllerDelegate> _delegate;
    RPBroadcastHostViewController *_hostViewController;
    CDUnknownBlockType _setupCompletionHandler;
}

@property (retain, nonatomic) RPBroadcastHostViewController *hostViewController;
@property (copy, nonatomic) CDUnknownBlockType setupCompletionHandler;
@property (weak, nonatomic) id <RPBroadcastViewControllerDelegate> delegate;

+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)getBroadcastExtensionWithBaseIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
+ (void)loadBroadcastViewControllerWithBaseIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

- (void)loadView;
- (void)viewDidLoad;

@end
