/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerProbeSample : RWIProtocolJSONObject

@property (nonatomic) int probeId;
@property (nonatomic) int sampleId;
@property (nonatomic) int batchId;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *payload;

- (id)initWithProbeId:(int)arg1 sampleId:(int)arg2 batchId:(int)arg3 timestamp:(double)arg4 payload:(id)arg5;

@end
