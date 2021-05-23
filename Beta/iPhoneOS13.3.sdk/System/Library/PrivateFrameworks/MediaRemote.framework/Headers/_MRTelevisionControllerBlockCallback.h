/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MRTelevisionControllerBlockCallback : NSObject

{
    CDUnknownBlockType _callbackBlock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) CDUnknownBlockType callbackBlock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (id)initWithCallbackBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end
