/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UITextView;

@interface HKFullScreenTextViewController : UIViewController

{
    NSString *_detailText;
}

@property (readonly) UITextView *textView;
@property (copy, nonatomic) NSString *detailText;

- (id)description;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)createTextView;

@end
