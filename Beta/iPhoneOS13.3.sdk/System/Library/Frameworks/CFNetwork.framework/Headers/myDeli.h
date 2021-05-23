/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSData, NSError, NSString;

@interface myDeli : NSObject <Swift>

{
    NSError *_errorResult;
    _Bool _receivedResponse;
    _Bool _hasCanceled;
    NSData *resumeData;
}

@property (retain) NSError *someError;
@property _Bool receivedResponse;
@property _Bool hasCanceled;
@property (copy) NSData *resumeData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;

@end
