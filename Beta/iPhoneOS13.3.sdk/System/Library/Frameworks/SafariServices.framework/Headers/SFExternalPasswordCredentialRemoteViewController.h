/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/SFPasswordRemoteViewController.h>

@class NSString;

@protocol SFExternalPasswordCredentialRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFExternalPasswordCredentialRemoteViewController : SFPasswordRemoteViewController

@property (weak, nonatomic) id <SFExternalPasswordCredentialRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)passwordServiceViewControllerName;

- (_Bool)_canShowWhileLocked;
- (void)presentExternalPasswordCredentialRemoteViewController;

@end
