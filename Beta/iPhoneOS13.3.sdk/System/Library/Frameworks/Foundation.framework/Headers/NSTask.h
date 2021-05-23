/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSURL;

@interface NSTask : NSObject

@property (copy) NSURL *executableURL;
@property (copy) NSArray *arguments;
@property (copy) NSDictionary *environment;
@property (copy) NSURL *currentDirectoryURL;
@property (retain) id standardInput;
@property (retain) id standardOutput;
@property (retain) id standardError;
@property (readonly) int processIdentifier;
@property (readonly, getter=isRunning) _Bool running;
@property (readonly) int terminationStatus;
@property (readonly) long long terminationReason;
@property (copy) CDUnknownBlockType terminationHandler;
@property long long qualityOfService;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)currentTaskDictionary;
+ (id)launchedTaskWithDictionary:(id)arg1;
+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2;
+ (id)launchedTaskWithExecutableURL:(id)arg1 arguments:(id)arg2 error:(out id *)arg3 terminationHandler:(CDUnknownBlockType)arg4;

- (id)init;
- (_Bool)resume;
- (id)currentDirectoryPath;
- (void)setCurrentDirectoryPath:(id)arg1;
- (id)launchPath;
- (void)setLaunchPath:(id)arg1;
- (void)launch;
- (_Bool)launchAndReturnError:(id *)arg1;
- (void)interrupt;
- (void)terminate;
- (_Bool)suspend;
- (long long)suspendCount;
- (void)setSpawnedProcessDisclaimed:(_Bool)arg1;
- (_Bool)isSpawnedProcessDisclaimed;

@end
