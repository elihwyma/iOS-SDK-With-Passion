/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@protocol OS_dispatch_queue;

@interface TSPIOHandlerWriteChannelAdapter : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)close;
- (void)writeData:(id)arg1;
- (void)setError:(id)arg1;
- (id)initWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
