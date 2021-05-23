/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@protocol AVMediaDataRequesterConsumer, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVMediaDataRequester : NSObject

{
    id <AVMediaDataRequesterConsumer> _mediaDataConsumer;
    NSObject<OS_dispatch_queue> *_requestQueue;
    CDUnknownBlockType _requestBlock;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *requestQueue;
@property (nonatomic, readonly) CDUnknownBlockType requestBlock;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)startRequestingMediaData;
- (id)initWithMediaDataConsumer:(id)arg1 requestQueue:(id)arg2 requestBlock:(CDUnknownBlockType)arg3;
- (void)_requestMediaDataIfReady;

@end
