/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class BSMachPortTaskNameRight, NSArray, NSDictionary, NSString, RBLaunchdJobLabel, RBSProcessExitStatus;

@protocol RBSProcessIdentifier;

__attribute__((visibility("hidden")))
@interface RBLaunchdJob : NSObject

{
    struct os_unfair_lock_s _lock;
    _Bool _lock_started;
    _Bool _lock_invalid;
    _Bool _disableASLR;
    _Bool _runAtLoad;
    _Bool _waitForDebugger;
    _Bool _buildDYLDClosure;
    RBLaunchdJobLabel *_label;
    BSMachPortTaskNameRight *_lock_taskNameRight;
    NSString *_executablePath;
    NSArray *_arguments;
    NSDictionary *_environment;
    NSArray *_machServices;
    NSString *_standardOutputPath;
    NSString *_standardErrorPath;
    NSString *_posixSpawnType;
    NSString *_managedPersona;
}

@property (copy, nonatomic, readonly) NSString *executablePath;
@property (copy, nonatomic, readonly) NSArray *arguments;
@property (copy, nonatomic, readonly) NSDictionary *environment;
@property (copy, nonatomic, readonly) NSArray *machServices;
@property (copy, nonatomic, readonly) NSString *standardOutputPath;
@property (copy, nonatomic, readonly) NSString *standardErrorPath;
@property (copy, nonatomic, readonly) NSString *posixSpawnType;
@property (copy, nonatomic, readonly) NSString *managedPersona;
@property (nonatomic, readonly) _Bool disableASLR;
@property (nonatomic, readonly) _Bool runAtLoad;
@property (nonatomic, readonly) _Bool waitForDebugger;
@property (copy, nonatomic, readonly) RBLaunchdJobLabel *label;
@property (retain, nonatomic, readonly) id <RBSProcessIdentifier> processIdentifier;
@property (retain, nonatomic, readonly) BSMachPortTaskNameRight *taskNameRight;
@property (retain, nonatomic, readonly) RBSProcessExitStatus *lastExitStatus;
@property (nonatomic, readonly) _Bool buildDYLDClosure;

- (id)init;
- (id)description;
- (id)debugDescription;
- (void)invalidate;
- (_Bool)stopWithError:(out id *)arg1;
- (_Bool)startWithError:(out id *)arg1;
- (id)_initWithLabel:(id)arg1 executablePath:(id)arg2 arguments:(id)arg3 environment:(id)arg4 machServices:(id)arg5 standardOutputPath:(id)arg6 standardErrorPath:(id)arg7 posixSpawnType:(id)arg8 options:(unsigned long long)arg9 managedPersona:(id)arg10;
- (_Bool)_lock_acquireTaskNameRightForOperation:(id)arg1 error:(out id *)arg2;
- (_Bool)isRunningWithError:(out id *)arg1;
- (struct _launch_data *)generateData;

@end
