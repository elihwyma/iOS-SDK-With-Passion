/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/SFPasswordRemoteViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFPasswordPickerRemoteViewController : SFPasswordRemoteViewController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)passwordServiceViewControllerName;

- (_Bool)_canShowWhileLocked;
- (void)selectedCredential:(id)arg1;

@end
