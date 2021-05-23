/*
 Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, _ANEDaemonConnection;

@interface _ANEClient : NSObject

{
    _ANEDaemonConnection *_conn;
    NSArray *_queues;
}

@property (nonatomic, readonly) _ANEDaemonConnection *conn;
@property (nonatomic, readonly) NSArray *queues;

+ (void)initialize;
+ (id)sharedConnection;
+ (id)sandboxExtensionForModel:(id)arg1;
+ (id)sharedPrivateConnection;

- (void)dealloc;
- (id)initWithRestrictedAccessAllowed:(_Bool)arg1;
- (_Bool)doLoadModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)doEvaluateDirectWithModel:(id)arg1 request:(id)arg2 qos:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)doUnloadModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)compileModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)loadModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)evaluateWithModel:(id)arg1 options:(id)arg2 request:(id)arg3 qos:(unsigned int)arg4 error:(id *)arg5;
- (_Bool)unloadModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)compiledModelExistsFor:(id)arg1;
- (void)purgeCompiledModel:(id)arg1;
- (_Bool)beginRealTimeTask;
- (_Bool)endRealTimeTask;
- (_Bool)loadRealTimeModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)evaluateRealTimeWithModel:(id)arg1 options:(id)arg2 request:(id)arg3 error:(id *)arg4;
- (_Bool)unloadRealTimeModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)echo:(id)arg1;

@end
