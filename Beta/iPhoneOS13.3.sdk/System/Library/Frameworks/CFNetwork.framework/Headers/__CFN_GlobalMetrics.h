/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, _NSURLSessionEventDelegate, _NSURLSessionHTTPRewriter;

@interface __CFN_GlobalMetrics : NSObject

{
    struct os_unfair_lock_s lock;
    id <_NSURLSessionEventDelegate> delegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    id <_NSURLSessionHTTPRewriter> _HTTPRewriter;
    id <_NSURLSessionEventDelegate> _forwardingDelegate;
    NSMutableDictionary *_defaultSessionMetrics;
    NSMutableDictionary *_ephemeralSessionMetrics;
    NSMutableDictionary *_backgroundSessionMetrics;
}

@property (retain, nonatomic) id <_NSURLSessionEventDelegate> forwardingDelegate;
@property (retain, nonatomic) NSMutableDictionary *defaultSessionMetrics;
@property (retain, nonatomic) NSMutableDictionary *ephemeralSessionMetrics;
@property (retain, nonatomic) NSMutableDictionary *backgroundSessionMetrics;
@property (retain) id <_NSURLSessionHTTPRewriter> HTTPRewriter;

+ (id)globalMetrics;

- (id)init;
- (void)sessionDestroy:(id)arg1;
- (void)sessionCreate:(id)arg1;

@end
