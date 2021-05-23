/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface VMUProcInfo : NSObject

{
    unsigned int _task;
    _Bool _needTaskPortDealloc;
    NSString *_name;
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    int _pid;
    int _ppid;
    struct timeval _startTime;
}

+ (id)getProcessIds;
+ (int)processParentId:(int)arg1;
+ (_Bool)isProcessRunning:(int)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (long long)compare:(id)arg1;
- (id)arguments;
- (_Bool)isRunning;
- (_Bool)terminate;
- (void)update;
- (int)pid;
- (unsigned int)task;
- (id)initWithPid:(int)arg1;
- (id)firstArgument;
- (struct timeval)startTime;
- (id)initWithTask:(unsigned int)arg1;
- (int)ppid;
- (id)userAppName;
- (int)cpuType;
- (id)envVars;
- (id)valueForEnvVar:(id)arg1;
- (_Bool)isApp;
- (id)realAppName;
- (id)_infoFromCommandLine:(int)arg1;
- (id)procTableName;
- (id)requestedAppName;
- (_Bool)isCFM;
- (_Bool)isMachO;
- (_Bool)isNative;
- (_Bool)signal:(int)arg1;
- (long long)compareByName:(id)arg1;
- (long long)compareByUserAppName:(id)arg1;

@end
