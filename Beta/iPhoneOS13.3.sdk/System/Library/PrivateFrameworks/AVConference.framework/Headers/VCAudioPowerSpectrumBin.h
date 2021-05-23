/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumBin : NSObject

{
    struct _VCRange _frequencyRange;
    float _powerLevel;
}

@property (nonatomic) struct _VCRange frequencyRange;
@property (nonatomic) float powerLevel;

- (id)description;
- (id)initWithFrequencyRange:(struct _VCRange)arg1;

@end
