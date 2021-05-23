/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, NSSet, NSString, NSUUID, PASampleTaskData, PASampleTaskDataPrivateData;

@interface PASampleTimeInsensitiveTaskData : NSObject

{
    int _pid;
    NSString *_name;
    NSString *_bundleName;
    unsigned long long _uniquePid;
    NSString *_mainBinaryPath;
    NSArray *_imageInfos;
    int _ppid;
    int _rpid;
    unsigned int _uid;
    struct _CSArchitecture _architecture;
    _Bool _isUnresponsive;
    double _timeOfLastResponse;
    _Bool _usesSuddenTermination;
    _Bool _allowsIdleExit;
    _Bool _wqAndDirtyAreStatic;
    _Bool _isDirty;
    _Bool _workQueueExceededConstrainedThreadLimit;
    _Bool _workQueueExceededTotalThreadLimit;
    _Bool _isThirdParty;
    _Bool _gatheredNonTimeCriticalAuxiliaryInfoFromLiveSystem;
    _Bool _gatheredTimeCriticalAuxiliaryInfoFromLiveSystem;
    _Bool _didExec;
    _Bool _isTranslocated;
    double _mostRecentTimeSamplingOnlyMainThread;
    NSMutableSet *_rootUserFrames;
    PASampleTaskDataPrivateData *_cachedPrivateData;
    NSSet *_cachedDonatingUniqueIds;
    PASampleTaskData *mostRecentTask;
    long long mostRecentTaskSampleIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) int rpid;
@property (readonly) unsigned int uid;
@property (readonly) unsigned long long uniquePid;
@property (copy) NSString *name;
@property (readonly) NSString *bundleName;
@property (readonly) struct _CSArchitecture architecture;
@property (readonly) _Bool isUnresponsive;
@property (readonly) double timeOfLastResponse;
@property (readonly) _Bool usesSuddenTermination;
@property (readonly) _Bool allowsIdleExit;
@property (readonly) _Bool wqAndDirtyAreStatic;
@property (readonly) _Bool isDirty;
@property (readonly) _Bool workQueueExceededConstrainedThreadLimit;
@property (readonly) _Bool workQueueExceededTotalThreadLimit;
@property (readonly) _Bool isThirdParty;
@property (readonly) _Bool isTranslocated;
@property _Bool didExec;
@property (readonly) NSArray *imageInfos;
@property (readonly) NSUUID *mainBinaryUuid;
@property (readonly) unsigned long long mainBinaryOffset;
@property (readonly) NSString *mainBinaryPath;
@property (retain) PASampleTaskDataPrivateData *cachedPrivateData;
@property (retain) NSSet *cachedDonatingUniqueIds;
@property double mostRecentTimeSamplingOnlyMainThread;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (void)setArchitecture:(struct _CSArchitecture)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)addImageInfos:(id)arg1;
- (void)guessArchitectureGivenMachineArchitecture:(struct _CSArchitecture)arg1;
- (_Bool)_matchesName:(const char *)arg1;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)initWithPid:(int)arg1 andUniqueID:(unsigned long long)arg2 andName:(const char *)arg3;
- (void)setNameWithCStr:(const char *)arg1;
- (void)_gatherTimeCriticalAuxiliaryInfoFromLiveSystemIsLate:(_Bool)arg1;
- (id)addUserStack:(id)arg1;
- (id)_initWithSerializedTimeInsensitiveTaskData:(const CDStruct_0f835532 *)arg1;
- (_Bool)gatherLoadInfoWithSampleTimeSeriesDataStore:(id)arg1;
- (id)rootUserFrames;
- (id)initWithStackshotTask:(id)arg1 andMachineArchitecture:(struct _CSArchitecture)arg2;
- (id)initWithKCDataStackshotTask:(const struct task_snapshot_v2 *)arg1 withLoadInfos:(const struct dyld_uuid_info_64 *)arg2 numLoadInfos:(unsigned int)arg3 andMachineArchitecture:(struct _CSArchitecture)arg4;
- (id)initWithKCDataStackshotDeltaTask:(const struct task_delta_snapshot_v2 *)arg1 withLoadInfos:(const struct dyld_uuid_info_64 *)arg2 numLoadInfos:(unsigned int)arg3 pid:(int)arg4 andMachineArchitecture:(struct _CSArchitecture)arg5;
- (void)_gatherNonTimeCriticalAuxiliaryInfoFromLiveSystemWithSampleTimeSeriesDataStore:(id)arg1;
- (_Bool)correspondsToStackshotTask:(id)arg1;
- (_Bool)correspondsToUniquePid:(unsigned long long)arg1 withName:(const char *)arg2 withLoadInfos:(const struct dyld_uuid_info_64 *)arg3 numLoadInfos:(unsigned int)arg4;

@end
