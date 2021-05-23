/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class EFFuture, EFPromise, NSMutableData, NSString, NSURLResponse;

@interface MFMessageURLConnectionDelegate : NSObject

{
    NSMutableData *_responseBody;
    EFPromise *_promise;
    NSURLResponse *_response;
}

@property (nonatomic, readonly) EFFuture *future;
@property (nonatomic, readonly) NSURLResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
