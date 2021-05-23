/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFPasswordServiceViewController : UIViewController

{
    NSString *_applicationIdentifier;
}

@property (nonatomic, readonly) NSString *applicationIdentifier;

+ (id)_remoteViewControllerInterface;

- (void)_willAppearInRemoteViewController;

@end
