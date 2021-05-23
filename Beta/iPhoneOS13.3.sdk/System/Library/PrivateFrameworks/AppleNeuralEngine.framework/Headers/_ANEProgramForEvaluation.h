/*
 Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

#import <Foundation/NSObject.h>

@class _ANEDeviceController;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface _ANEProgramForEvaluation : NSObject

{
    BOOL _queueDepth;
    NSObject<OS_dispatch_queue> *_q;
    _ANEDeviceController *_controller;
    unsigned long long _programHandle;
    unsigned long long _intermediateBufferHandle;
    NSObject<OS_dispatch_semaphore> *_requestsInFlight;
    long long _currentAsyncRequestsInFlight;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *q;
@property (nonatomic, readonly) _ANEDeviceController *controller;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) unsigned long long intermediateBufferHandle;
@property (nonatomic, readonly) BOOL queueDepth;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *requestsInFlight;
@property (nonatomic) long long currentAsyncRequestsInFlight;

+ (id)new;
+ (id)programWithHandle:(unsigned long long)arg1 intermediateBufferHandle:(unsigned long long)arg2 queueDepth:(BOOL)arg3;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithHandle:(unsigned long long)arg1 intermediateBufferHandle:(unsigned long long)arg2 queueDepth:(BOOL)arg3;
- (_Bool)processRequest:(id)arg1 qos:(unsigned int)arg2 qIndex:(unsigned long long)arg3 error:(id *)arg4;

@end
