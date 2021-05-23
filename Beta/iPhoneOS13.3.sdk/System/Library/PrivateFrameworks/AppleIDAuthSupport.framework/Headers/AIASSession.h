/*
 Image: /System/Library/PrivateFrameworks/AppleIDAuthSupport.framework/AppleIDAuthSupport
 */

#import <Foundation/NSObject.h>

#import <AppleIDAuthSupport/Swift-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;

__attribute__((visibility("hidden")))
@interface AIASSession : NSObject <Swift>

{
    _Bool _invalidated;
    NSMutableDictionary *_taskMap;
    NSURLSession *_URLSession;
}

@property (retain) NSMutableDictionary *taskMap;
@property (retain) NSURLSession *URLSession;
@property _Bool invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidateAndCancel;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getRequest:(id)arg1;
- (id)requestWithURL:(id)arg1 data:(struct __CFDictionary *)arg2 clientInfo:(id)arg3 proxiedClientInfo:(id)arg4 companionClientInfo:(id)arg5 appleITeamId:(id)arg6 appleIClientId:(id)arg7;

@end
