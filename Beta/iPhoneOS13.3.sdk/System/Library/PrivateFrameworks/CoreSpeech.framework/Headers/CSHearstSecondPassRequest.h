/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAudioProvider, CSAudioStreamHolding, CSVoiceTriggerSecondPass, NSString;

@interface CSHearstSecondPassRequest : NSObject

{
    _Bool _isSecondPassRunning;
    float _remoteMicVADScore;
    NSString *_firstPassDeviceID;
    CSVoiceTriggerSecondPass *_voiceTriggerSecondPass;
    CSAudioStreamHolding *_audioStreamHolding;
    CSAudioProvider *_audioProvider;
}

@property (retain, nonatomic) NSString *firstPassDeviceID;
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;
@property (nonatomic) _Bool isSecondPassRunning;
@property (nonatomic) float remoteMicVADScore;
@property (retain, nonatomic) CSAudioStreamHolding *audioStreamHolding;
@property (retain, nonatomic) CSAudioProvider *audioProvider;

- (void)dealloc;
- (void)start;
- (void)reset;
- (void)setAsset:(id)arg1;
- (id)initWithDeviceID:(id)arg1;
- (void)holdAudioStreamWithTimeout:(double)arg1;
- (void)cancelAudioStreamHold;

@end
