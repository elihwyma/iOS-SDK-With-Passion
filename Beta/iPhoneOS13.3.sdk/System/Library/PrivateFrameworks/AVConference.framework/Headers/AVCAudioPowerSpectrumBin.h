/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@interface AVCAudioPowerSpectrumBin : NSObject

{
    float _minFrequency;
    float _maxFrequency;
    float _powerLevel;
}

@property (nonatomic, readonly) float minFrequency;
@property (nonatomic, readonly) float maxFrequency;
@property (nonatomic, readonly) float powerLevel;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)assign:(const struct _VCAudioPowerSpectrumEntry *)arg1;

@end
