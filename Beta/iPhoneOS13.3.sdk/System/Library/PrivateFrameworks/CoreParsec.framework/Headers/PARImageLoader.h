/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSURLSession, PARSearchClient;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface PARImageLoader : NSObject

{
    NSObject<OS_dispatch_queue> *_pendingQueue;
    NSMutableDictionary *_pendingRequests;
    NSURLSession *_urlSession;
    PARSearchClient *_client;
    NSObject<OS_dispatch_queue> *_mapQueue;
    NSDictionary *_imageMap;
    NSObject<OS_dispatch_queue> *_futureWaitQueue;
    NSObject<OS_dispatch_semaphore> *_futureWaitSemaphore;
}

- (id)initWithClient:(id)arg1;
- (id)_fetchImageData:(id)arg1 timeoutInterval:(double)arg2;
- (id)fetchImageData:(id)arg1 timeoutInterval:(double)arg2;

@end
