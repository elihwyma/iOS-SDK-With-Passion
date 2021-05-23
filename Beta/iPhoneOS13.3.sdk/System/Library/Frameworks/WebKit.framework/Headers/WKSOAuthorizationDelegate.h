/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKSOAuthorizationDelegate : NSObject

{
    RefPtr_7a6424cf _session;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (void)setSession:(RefPtr_7a6424cf *)arg1;
- (void)authorizationDidNotHandle:(id)arg1;
- (void)authorizationDidCancel:(id)arg1;
- (void)authorizationDidComplete:(id)arg1;
- (void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2;
- (void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3;
- (void)authorization:(id)arg1 didCompleteWithError:(id)arg2;
- (void)authorization:(id)arg1 presentViewController:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
