/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSVoiceTriggerStatAggregator : NSObject

{
    unsigned long long _numFalseWakeUp;
    unsigned long long _lastAggTimeFalseWakeUp;
}

@property (nonatomic) unsigned long long numFalseWakeUp;
@property (nonatomic) unsigned long long lastAggTimeFalseWakeUp;

+ (id)sharedAggregator;

- (id)init;
- (void)logFalseWakeUp:(_Bool)arg1;
- (void)powerLogVoiceTriggerStart;
- (void)powerLogVoiceTriggerStop;
- (void)_borealisPowerlog:(id)arg1;

@end
