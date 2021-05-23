/*
 Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

#import <Foundation/NSObject.h>

#import <AppleNeuralEngine/Swift-Protocol.h>

@class NSXPCConnection;

@interface _ANEDaemonConnection : NSObject <Swift>

{
    _Bool _restricted;
    NSXPCConnection *_daemonConnection;
}

@property (nonatomic, readonly) NSXPCConnection *daemonConnection;
@property (nonatomic, readonly) _Bool restricted;

+ (id)daemonConnection;
+ (id)daemonConnectionRestricted;

- (id)init;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1 restricted:(_Bool)arg2;
- (void)beginRealTimeTaskWithReply:(CDUnknownBlockType)arg1;
- (void)endRealTimeTaskWithReply:(CDUnknownBlockType)arg1;
- (void)echo:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)compileModel:(id)arg1 sandboxExtension:(id)arg2 options:(id)arg3 qos:(unsigned int)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)loadModel:(id)arg1 sandboxExtension:(id)arg2 options:(id)arg3 qos:(unsigned int)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)unloadModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)compiledModelExistsFor:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)purgeCompiledModel:(id)arg1 withReply:(CDUnknownBlockType)arg2;

@end
