/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSTask.h>

@class NSMutableDictionary, NSObject, NSPort;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSConcreteTask : NSTask

{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_dictionary;
    CDUnknownBlockType _terminationHandler;
    NSObject<OS_dispatch_source> *_dsrc;
    NSPort *_tmpPort;
    long long _suspendCount;
    int _pid;
    _Atomic unsigned long long __exitRunningInfo;
    BOOL _qos;
    _Atomic _Bool _isSpawnedProcessDisclaimed;
}

- (id)init;
- (void)dealloc;
- (_Bool)resume;
- (int)processIdentifier;
- (id)arguments;
- (id)currentDirectoryPath;
- (long long)qualityOfService;
- (void)setQualityOfService:(long long)arg1;
- (id)environment;
- (void)setArguments:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (id)launchPath;
- (void)setLaunchPath:(id)arg1;
- (_Bool)launchWithDictionary:(id)arg1 error:(id *)arg2;
- (void)setTerminationHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)terminationHandler;
- (int)terminationStatus;
- (long long)terminationReason;
- (_Bool)isRunning;
- (void)launch;
- (_Bool)launchAndReturnError:(id *)arg1;
- (void)setEnvironment:(id)arg1;
- (void)interrupt;
- (void)terminate;
- (_Bool)suspend;
- (long long)suspendCount;
- (void)setStandardInput:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (void)setStandardError:(id)arg1;
- (id)standardInput;
- (id)standardOutput;
- (id)standardError;
- (void)setSpawnedProcessDisclaimed:(_Bool)arg1;
- (_Bool)isSpawnedProcessDisclaimed;
- (void)_setTerminationHandler:(CDUnknownBlockType)arg1;
- (void)_withTaskDictionary:(CDUnknownBlockType)arg1;
- (long long)_platformExitInformation;
- (void)waitUntilExit;
- (void)setPreferredArchitectures:(id)arg1;
- (id)preferredArchitectures;
- (void)setTaskDictionary:(id)arg1;
- (id)taskDictionary;
- (void)terminateTask;
- (int)_procid;
- (void)setStartsNewProcessGroup:(_Bool)arg1;

@end
