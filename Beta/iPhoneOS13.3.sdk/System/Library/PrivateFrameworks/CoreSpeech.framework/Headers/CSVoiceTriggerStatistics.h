/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface CSVoiceTriggerStatistics : NSObject

{
    unsigned long long _triggerCount;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _consecutivePHSRejects;
    double _lastPHSReject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)clearTriggerCount;
- (unsigned long long)triggerCount;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;
- (void)resetPHSRejectCount;
- (double)getLastPHSRejectTime;
- (unsigned long long)getPHSRejectCount;
- (void)incrementPHSRejectCount;
- (void)increaseTriggerCount;

@end
