/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, _DPStringRecorder;

@protocol OS_dispatch_queue;

@interface HDDiffPrivReporter : NSObject

{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    _DPStringRecorder *_recorder;
}

+ (_Bool)isAvailable;
+ (id)reportableTypes;

- (id)initWithProfile:(id)arg1;
- (id)_typesInMonthWithDataForTypes:(id)arg1 now:(id)arg2 error:(id *)arg3;
- (_Bool)_recordTypesUsedInPastMonth:(id)arg1;
- (_Bool)reportWithCurrentDate:(id)arg1 error:(id *)arg2;

@end
