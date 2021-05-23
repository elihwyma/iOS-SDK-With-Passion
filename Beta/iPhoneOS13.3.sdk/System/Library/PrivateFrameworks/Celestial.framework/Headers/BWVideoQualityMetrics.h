/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWVideoQualityMetrics : NSObject

{
    long long _totalLux;
    int _frames;
}

@property (nonatomic, readonly) unsigned int qualityScoringVersion;

+ (void)initialize;
+ (id)filterMetadata:(id)arg1;
+ (double)_luxThreshold;
+ (double)_luxTransition;

- (void)reset;
- (void)processMetadata:(id)arg1;
- (double)computeQualityScore;
- (double)_computeLuxScore;

@end
