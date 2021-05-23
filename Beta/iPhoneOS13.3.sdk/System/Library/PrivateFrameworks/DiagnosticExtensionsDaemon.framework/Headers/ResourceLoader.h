/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

#import <DiagnosticExtensionsDaemon/Swift-Protocol.h>

@class NSOperationQueue, NSString, NSURLCache, NSURLSession;

@interface ResourceLoader : NSObject <Swift>

{
    NSOperationQueue *_queue;
    NSURLSession *_session;
    NSURLCache *_urlCache;
}

@property (retain, nonatomic) NSURLCache *urlCache;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_localDateFormatter;
+ (id)_rfc1123DateFormatter;

- (id)init;
- (void)flushCache;
- (double)_simulatedLatency;
- (void)asynchronousDataFromURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)refreshCacheForRequest:(id)arg1 usingCachedResponse:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
