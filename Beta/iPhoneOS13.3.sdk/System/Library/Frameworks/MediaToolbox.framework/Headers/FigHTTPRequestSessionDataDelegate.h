/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FigHTTPRequestSessionDataDelegate : NSObject

{
    NSMutableDictionary *_taskToFigHTTPRequest;
    struct OpaqueFigReentrantMutex *_taskToFigHTTPRequestMutex;
    unsigned char _doesIgnoreDidReceiveResponseDisposition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithResponseDispositionOption:(_Bool)arg1;
- (struct FigRetainProxy *)_copyAndLockRequestForTask:(id)arg1;
- (void)_registerFigHTTPRequest:(struct OpaqueFigHTTPRequest *)arg1 forDataTask:(id)arg2;
- (void)_deregisterFigHTTPRequestForDataTask:(id)arg1;

@end
