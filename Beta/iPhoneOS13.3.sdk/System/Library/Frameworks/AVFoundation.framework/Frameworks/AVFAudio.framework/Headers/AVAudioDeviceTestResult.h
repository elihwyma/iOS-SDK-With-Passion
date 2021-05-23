/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface AVAudioDeviceTestResult : NSObject

{
    long long _inputID;
    long long _outputID;
    NSData *_data;
    double _sampleRate;
    double _correlationValue;
}

@property (nonatomic) long long outputID;
@property (nonatomic) long long inputID;
@property (nonatomic) double sampleRate;
@property (nonatomic) double correlationValue;
@property (nonatomic, readonly) NSData *data;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 inputID:(long long)arg2 outputID:(long long)arg3 sampleRate:(double)arg4 correlationValue:(double)arg5;

@end
