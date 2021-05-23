/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/_UIRemoteViewController.h>

#import <SafariServices/Swift-Protocol.h>

@class NSString;

@protocol SFPasswordRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFPasswordRemoteViewController : _UIRemoteViewController <Swift>

{
    id <SFPasswordRemoteViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SFPasswordRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)passwordServiceViewControllerName;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;

- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)willDismissServiceViewController;

@end
