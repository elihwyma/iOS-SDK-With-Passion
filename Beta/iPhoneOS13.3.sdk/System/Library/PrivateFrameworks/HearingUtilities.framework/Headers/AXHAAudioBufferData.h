/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class AVAudioPCMBuffer, AVAudioTime, SNDetectionResult;

@interface AXHAAudioBufferData : NSObject

{
    AVAudioPCMBuffer *_buffer;
    AVAudioTime *_when;
    SNDetectionResult *_result;
}

@property (retain, nonatomic) AVAudioPCMBuffer *buffer;
@property (retain, nonatomic) AVAudioTime *when;
@property (retain, nonatomic) SNDetectionResult *result;

- (id)initWithBuffer:(id)arg1 andTime:(id)arg2;

@end
