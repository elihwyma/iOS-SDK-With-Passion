/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSDictionary;

@interface BWInferenceConfiguration : NSObject

{
    int _inferenceType;
    unsigned int _priority;
    float _maximumFramesPerSecond;
    NSDictionary *_tuningParameters;
}

@property (nonatomic, readonly) int inferenceType;
@property (nonatomic) unsigned int priority;
@property (nonatomic) float maximumFramesPerSecond;
@property (copy, nonatomic) NSDictionary *tuningParameters;

- (void)dealloc;
- (id)initWithInferenceType:(int)arg1;

@end
