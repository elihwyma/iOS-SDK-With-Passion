/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@interface VTCorruptDetector : NSObject

{
    int _zeroSamplesCount;
    int _maxZeroSamplesCount;
}

- (id)init;
- (void)reset;
- (void)analyze:(struct AudioBuffer)arg1;
- (int)getMaxZeroSampleCount;
- (_Bool)audioHasZeroRun;

@end
