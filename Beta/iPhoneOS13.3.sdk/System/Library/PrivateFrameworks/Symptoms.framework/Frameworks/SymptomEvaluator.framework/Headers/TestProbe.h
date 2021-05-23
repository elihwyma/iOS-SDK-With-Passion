/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSUUID;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface TestProbe : NSObject

{
    _Bool _running;
    unsigned int _status;
    NSUUID *_uuid;
    NSString *_diagSessionUUID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_periodicTimer;
    NSMutableArray *_probeOutputFilePaths;
}

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *diagSessionUUID;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isRunning) _Bool running;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *periodicTimer;
@property (nonatomic, readonly) NSMutableArray *probeOutputFilePaths;

+ (id)testProbeStatusString:(unsigned int)arg1;
+ (void)autoBugCapturePath:(id *)arg1 autoBugCaptureUID:(id *)arg2 autoBugCaptureGID:(id *)arg3;
+ (void *)loadCoreUtils;

- (_Bool)isEqual:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)stopTest;
- (void)removeProbeOutputFiles;
- (void)cancelTest:(CDUnknownBlockType)arg1;
- (_Bool)startPeriodicTimerAt:(unsigned long long)arg1 repeatInterval:(unsigned long long)arg2;
- (void)stopPeriodicTimer;
- (void)periodicTimerFired:(id)arg1;
- (_Bool)startPeriodicTimer;

@end
