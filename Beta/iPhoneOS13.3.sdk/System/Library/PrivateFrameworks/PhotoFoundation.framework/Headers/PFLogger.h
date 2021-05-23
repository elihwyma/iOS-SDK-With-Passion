/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString;

@protocol OS_dispatch_queue, PFLoggerBackend;

@interface PFLogger : NSObject

{
    _Bool _shouldLogToCrashReporter;
    _Bool _backendAllowsConcurrentAccess;
    int _logLevel;
    NSObject<PFLoggerBackend> *_backend;
    NSArray *_tracedSubsystems;
    NSArray *_debuggedSubsystems;
    NSString *_facilityPrefix;
    NSDictionary *_options;
    NSObject<OS_dispatch_queue> *_backendAccessSerializationQueue;
    NSObject<OS_dispatch_queue> *_recordedSubsystemsQueue;
    NSSet *_recordedSubsystems;
}

@property (retain) NSString *facilityPrefix;
@property (retain) NSDictionary *options;
@property (retain) NSObject<PFLoggerBackend> *backend;
@property (retain) NSObject<OS_dispatch_queue> *backendAccessSerializationQueue;
@property _Bool backendAllowsConcurrentAccess;
@property (retain) NSObject<OS_dispatch_queue> *recordedSubsystemsQueue;
@property (retain) NSSet *recordedSubsystems;
@property int logLevel;
@property _Bool shouldLogToCrashReporter;
@property (retain) NSArray *tracedSubsystems;
@property (retain) NSArray *debuggedSubsystems;

+ (void)initialize;
+ (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4;
+ (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 arguments:(char *)arg5;
+ (void)logCrashReporterMessage:(id)arg1 fromCodeLocation:(CDStruct_98c8119d)arg2;
+ (id)loggerWithBackend:(id)arg1 logLevel:(int)arg2 options:(id)arg3;
+ (id)defaultLogger;
+ (void)flushDefaultLoggerIfPresent;
+ (void)setDefaultLogger:(id)arg1;
+ (void)recreateDefaultLogger;
+ (int)defaultLoggerLogLevel;
+ (id)createDefaultLogger;
+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;
+ (_Bool)enabledForSubsystem:(id)arg1 level:(int)arg2;
+ (void)setupCrashReporter;
+ (void)logCrashReporterMessageFromCodeLocation:(CDStruct_98c8119d)arg1 format:(id)arg2;
+ (_Bool)traceEnabledForSubsystem:(id)arg1;

- (id)description;
- (void)flush;
- (id)initWithBackend:(id)arg1 logLevel:(int)arg2 options:(id)arg3;
- (void)processOptions;
- (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4;
- (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 arguments:(char *)arg5;
- (_Bool)enabledForSubsystem:(id)arg1 subsystems:(id)arg2;
- (void)_recordSubsystem:(id)arg1;

@end
