/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class NSDate;

@interface HUNoiseSample : NSObject

{
    float _splValue;
    float _sampleDuration;
    NSDate *_sampleDate;
}

@property (retain, nonatomic) NSDate *sampleDate;
@property (nonatomic) float splValue;
@property (nonatomic) float sampleDuration;

- (id)initWithSampleDate:(id)arg1 splValue:(float)arg2 andDuration:(float)arg3;

@end
