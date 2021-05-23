/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface ENStoreClient : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void)handleError:(id)arg1;
- (void)invokeAsyncBoolBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invokeAsyncInt32Block:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invokeAsyncObjectBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invokeAsyncBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
