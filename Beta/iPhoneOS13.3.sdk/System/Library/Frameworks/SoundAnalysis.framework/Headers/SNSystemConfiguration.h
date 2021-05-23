/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNSystemConfiguration : NSObject

{
    unsigned int _channelCount;
    double _sampleRate;
}

@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned int channelCount;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSampleRate:(double)arg1 channelCount:(unsigned int)arg2;

@end
