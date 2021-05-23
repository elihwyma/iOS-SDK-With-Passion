/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface NSProcessInfo : NSObject

{
    NSDictionary *environment;
    NSArray *arguments;
    NSString *hostName;
    NSString *name;
    long long automaticTerminationOptOutCounter;
}

@property (copy, readonly) NSString *userName;
@property (copy, readonly) NSString *fullUserName;
@property (readonly, getter=isMacCatalystApp) _Bool macCatalystApp;
@property (copy, readonly) NSDictionary *environment;
@property (copy, readonly) NSArray *arguments;
@property (copy, readonly) NSString *hostName;
@property (copy) NSString *processName;
@property (readonly) int processIdentifier;
@property (copy, readonly) NSString *globallyUniqueString;
@property (copy, readonly) NSString *operatingSystemVersionString;
@property (readonly) CDStruct_2ec95fd7 operatingSystemVersion;
@property (readonly) unsigned long long processorCount;
@property (readonly) unsigned long long activeProcessorCount;
@property (readonly) unsigned long long physicalMemory;
@property (readonly) double systemUptime;
@property _Bool automaticTerminationSupportEnabled;

+ (id)processInfo;

- (void)dealloc;
- (void)performExpiringActivityWithReason:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_registerForHardwareStateNotifications;
- (unsigned long long)operatingSystem;
- (void)setArguments:(id)arg1;
- (id)userHomeDirectory;
- (id)operatingSystemName;
- (_Bool)isOperatingSystemAtLeastVersion:(CDStruct_2ec95fd7)arg1;
- (_Bool)isTranslated;
- (void)disableSuddenTermination;
- (void)enableSuddenTermination;
- (void)_exitIfSuddenTerminationEnabledWithStatus:(int)arg1;
- (void)_exitWhenSuddenTerminationEnabledWithStatus:(int)arg1;
- (long long)_suddenTerminationDisablingCount;
- (void)disableAutomaticTermination:(id)arg1;
- (void)enableAutomaticTermination:(id)arg1;
- (void)_disableAutomaticTerminationOnly:(id)arg1;
- (void)_enableAutomaticTerminationOnly:(id)arg1;
- (void)_reactivateActivity:(id)arg1;
- (void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)beginSuspensionOfSystemBehaviors:(unsigned long long)arg1 reason:(id)arg2;
- (void)endSystemBehaviorSuspension:(id)arg1;
- (id)beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (void)endActivity:(id)arg1;
- (void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 block:(CDUnknownBlockType)arg3;
- (long long)thermalState;
- (_Bool)isLowPowerModeEnabled;

@end
