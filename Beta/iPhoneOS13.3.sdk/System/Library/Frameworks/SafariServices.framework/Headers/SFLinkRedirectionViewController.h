/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/SFSafariViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFLinkRedirectionViewController : SFSafariViewController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithURL:(id)arg1;
- (void)viewDidLoad;
- (void)setDefersAddingRemoteViewController:(_Bool)arg1;
- (void)remoteViewController:(id)arg1 didResolveRedirectionWithURL:(id)arg2 appLink:(id)arg3;

@end
