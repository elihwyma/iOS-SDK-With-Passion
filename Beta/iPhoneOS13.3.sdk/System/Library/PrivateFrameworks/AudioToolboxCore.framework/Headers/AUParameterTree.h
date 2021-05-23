/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <AudioToolboxCore/AUParameterGroup.h>

@class AUAudioUnit_XH, NSObject, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface AUParameterTree : AUParameterGroup

{
    _Bool __autoCreatedForV2AU;
    _Bool __suppressObserverCallbacks;
    int _numRecorders;
    NSObject<OS_dispatch_queue> *_observationQueue;
    struct AUObserverController *_observerController;
    NSObject<OS_dispatch_queue> *_valueAccessQueue;
    AUAudioUnit_XH *__auXH;
    struct AURemoteParameterObserver *_remoteObserverToken;
    struct AURemoteParameterObserver *_remoteRecorderToken;
    NSXPCConnection *_remoteParameterSynchronizerXPCConnection;
    vector_66b3461a _addrToParamIndex;
}

@property (nonatomic) vector_66b3461a addrToParamIndex;
@property (nonatomic) _Bool _autoCreatedForV2AU;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *observationQueue;
@property (nonatomic) struct AUObserverController *observerController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *valueAccessQueue;
@property (weak, nonatomic) AUAudioUnit_XH *_auXH;
@property (nonatomic) int numRecorders;
@property (nonatomic) struct AURemoteParameterObserver *remoteObserverToken;
@property (nonatomic) struct AURemoteParameterObserver *remoteRecorderToken;
@property (nonatomic) _Bool _suppressObserverCallbacks;
@property (weak, nonatomic) NSXPCConnection *remoteParameterSynchronizerXPCConnection;

+ (_Bool)supportsSecureCoding;
+ (id)createParameterWithIdentifier:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned int)arg6 unitName:(id)arg7 flags:(unsigned int)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10;
+ (id)createGroupWithIdentifier:(id)arg1 name:(id)arg2 children:(id)arg3;
+ (id)createGroupTemplate:(id)arg1;
+ (id)createGroupFromTemplate:(id)arg1 identifier:(id)arg2 name:(id)arg3 addressOffset:(unsigned long long)arg4;
+ (id)createTreeWithChildren:(id)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)parameterWithAddress:(unsigned long long)arg1;
- (id)parameterWithID:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (void)_checkInitTreeObservation;
- (void)_init2;
- (id)initWithChildren:(id)arg1;
- (void)remoteSyncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;

@end
