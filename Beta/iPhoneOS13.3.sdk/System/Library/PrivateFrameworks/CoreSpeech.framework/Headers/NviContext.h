/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface NviContext : NSObject

{
    _Bool _requestHistoricalAudio;
    _Bool _shouldLogRawSensorData;
    NSDictionary *_voiceTriggerInfo;
    unsigned long long _reqStartAudioSampleId;
    unsigned long long _reqStartMachAbsTime;
    NSString *_rootLogDir;
}

@property (retain, nonatomic) NSDictionary *voiceTriggerInfo;
@property (nonatomic) _Bool requestHistoricalAudio;
@property (nonatomic) unsigned long long reqStartAudioSampleId;
@property (nonatomic) unsigned long long reqStartMachAbsTime;
@property (nonatomic) _Bool shouldLogRawSensorData;
@property (retain, nonatomic) NSString *rootLogDir;

- (id)description;

@end
