/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _SFMultipleLineAlertActionViewController : UIViewController

{
    NSString *_title;
    NSString *_detail;
    long long _style;
}

- (void)loadView;
- (struct CGSize)preferredContentSize;
- (id)initWithTitle:(id)arg1 detail:(id)arg2 style:(long long)arg3;

@end
