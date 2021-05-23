/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface AVVCPrepareRecordSettings : NSObject

{
    _Bool _meteringEnabled;
    unsigned long long _streamID;
    NSDictionary *_avAudioSettings;
    double _recordBufferDuration;
}

@property (nonatomic) unsigned long long streamID;
@property (retain, nonatomic) NSDictionary *avAudioSettings;
@property (nonatomic) double recordBufferDuration;
@property (nonatomic) _Bool meteringEnabled;

- (void)dealloc;
- (id)initWithStreamID:(unsigned long long)arg1 settings:(id)arg2 bufferDuration:(double)arg3;

@end
