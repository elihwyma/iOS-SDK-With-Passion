/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface _MFNetworkObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
}

- (void)execute;
- (id)initWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end
