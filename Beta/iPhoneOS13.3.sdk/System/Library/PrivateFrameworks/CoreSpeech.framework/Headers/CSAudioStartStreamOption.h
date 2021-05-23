/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_xpc_object;

@interface CSAudioStartStreamOption : NSObject

{
    _Bool _requestHistoricalAudioDataWithHostTime;
    _Bool _requestHistoricalAudioDataSampleCount;
    _Bool _useOpportunisticZLL;
    unsigned long long _startRecordingHostTime;
    unsigned long long _startRecordingSampleCount;
    long long _startAlertBehavior;
    long long _stopAlertBehavior;
    long long _errorAlertBehavior;
}

@property (nonatomic) _Bool requestHistoricalAudioDataWithHostTime;
@property (nonatomic) _Bool requestHistoricalAudioDataSampleCount;
@property (nonatomic) unsigned long long startRecordingHostTime;
@property (nonatomic) unsigned long long startRecordingSampleCount;
@property (nonatomic) _Bool useOpportunisticZLL;
@property (nonatomic) long long startAlertBehavior;
@property (nonatomic) long long stopAlertBehavior;
@property (nonatomic) long long errorAlertBehavior;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcObject;
@property (nonatomic, readonly) NSString *localizedDescription;

+ (id)mutedOption;

- (id)initWithXPCObject:(id)arg1;
- (void)setAVVCAlertBehavior:(id)arg1;
- (id)avvcAlertBehavior;
- (long long)_alertBehaviorTypeFromAVVCOberrideType:(long long)arg1;
- (long long)_avvcAlertOverrideType:(long long)arg1;
- (id)avvcStartRecordSettingsWithAudioStreamHandleId:(unsigned long long)arg1;
- (id)avvcSettings;

@end
