/*
 Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface _ANEDeviceController : NSObject

{
    _Bool _isPrivileged;
    NSObject<OS_dispatch_queue> *_q;
    long long _usecount;
    unsigned long long _programHandle;
    CDStruct_1512e65b *_device;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *q;
@property (nonatomic) long long usecount;
@property (nonatomic, readonly) _Bool isPrivileged;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) CDStruct_1512e65b *device;

+ (id)controllerWithProgramHandle:(unsigned long long)arg1;
+ (id)sharedPrivilegedConnection;

- (void)stop;
- (void)start;
- (id)initWithProgramHandle:(unsigned long long)arg1 priviledged:(_Bool)arg2;

@end
