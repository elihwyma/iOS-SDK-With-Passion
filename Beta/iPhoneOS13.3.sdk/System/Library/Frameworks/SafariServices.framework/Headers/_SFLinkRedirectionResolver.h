/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, SFLinkRedirectionViewController, SFSafariViewController;

@interface _SFLinkRedirectionResolver : NSObject

{
    CDUnknownBlockType _completionHandler;
    SFLinkRedirectionViewController *_redirectionViewController;
}

@property (nonatomic, readonly) SFSafariViewController *safariViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)safariViewController:(id)arg1 didResolveRedirectionWithURL:(id)arg2 appLink:(id)arg3;
- (id)initWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
