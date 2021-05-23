/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView, UILabel;

@interface PMTTRLoadingViewController : UIViewController

{
    UILabel *_radarCollectionInfoLabel;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (retain, nonatomic) UILabel *radarCollectionInfoLabel;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;

- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;

@end
