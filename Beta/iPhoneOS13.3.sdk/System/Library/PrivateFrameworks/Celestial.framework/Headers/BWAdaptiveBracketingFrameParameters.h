/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWAdaptiveBracketingFrameParameters : NSObject

{
    int _integrationTimeInMicroseconds;
    float _gain;
    int _maxAGC;
}

@property (nonatomic, readonly) int integrationTimeInMiroseconds;
@property (nonatomic, readonly) double integrationTimeInSeconds;
@property (nonatomic, readonly) float gain;
@property (nonatomic, readonly) int maxAGC;

+ (id)frameParametersWithIntegrationTimeInSeconds:(double)arg1 gain:(float)arg2 maxAGC:(int)arg3;
+ (id)frameParametersWithIntegrationTimeInMicroseconds:(int)arg1 gain:(float)arg2 maxAGC:(int)arg3;

- (id)initWithIntegrationTimeInMicroseconds:(int)arg1 gain:(float)arg2 maxAGC:(int)arg3;

@end
