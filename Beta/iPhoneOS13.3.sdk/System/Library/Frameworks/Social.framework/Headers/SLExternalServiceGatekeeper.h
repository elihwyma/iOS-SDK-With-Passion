/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SLExternalServiceGatekeeper : NSObject

{
    NSString *_redirectHost;
    NSURL *_url;
    CDUnknownBlockType _completion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (_Bool)_gatekeepingIsNotAvailable;
- (void)_completeWithURLToLoad:(id)arg1 error:(id)arg2;
- (id)initForPermissionToAccessURL:(id)arg1 fromURLString:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
