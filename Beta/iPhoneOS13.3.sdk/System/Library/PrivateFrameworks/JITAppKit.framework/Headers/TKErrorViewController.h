/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <UIViewController.h>

@class NSString, UILabel;

@interface TKErrorViewController : UIViewController

{
    UILabel *_label;
    NSString *_message;
}

@property (copy, nonatomic) NSString *message;

+ (id)viewControllerForMessage:(id)arg1;

- (void)loadView;
- (void)viewDidLoad;

@end
