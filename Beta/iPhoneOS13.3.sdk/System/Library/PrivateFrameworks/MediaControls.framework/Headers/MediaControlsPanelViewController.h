/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <UIKit/UIViewController.h>

@class MPAVRoutingViewController, UIView;

@interface MediaControlsPanelViewController : UIViewController

{
    id _delegate;
    MPAVRoutingViewController *_routingViewController;
    UIView *_backgroundView;
}

@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) MPAVRoutingViewController *routingViewController;
@property (retain, nonatomic) UIView *backgroundView;

+ (id)panelViewControllerForCoverSheet;

@end
