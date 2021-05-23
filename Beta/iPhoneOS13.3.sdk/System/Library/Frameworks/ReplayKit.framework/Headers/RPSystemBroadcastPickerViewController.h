/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <UIKit/UIViewController.h>

@class NSString, RPBroadcastPickerHostViewController;

@interface RPSystemBroadcastPickerViewController : UIViewController

{
    RPBroadcastPickerHostViewController *_hostViewController;
}

@property (retain, nonatomic) RPBroadcastPickerHostViewController *hostViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewControllerDidFinish;

@end
