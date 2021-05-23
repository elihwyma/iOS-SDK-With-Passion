/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NSURLSessionTaskDelegate;

@interface _RUILoaderSessionDelegateAdapter : NSObject

{
    NSObject<NSURLSessionTaskDelegate> *_delegate;
}

@property (weak, nonatomic) NSObject<NSURLSessionTaskDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
