/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface ARPresentationStats : NSObject

{
    double _averageCompositeTime;
    double _averageRenderTime;
    double _vsyncTime;
    double _averageTotalTime;
    double _averageTotalTimePercent;
    double _averageCompositeTimePercent;
    double _averageRenderTimePercent;
    NSArray *_predictedSamples;
    long long _mode;
}

@property (nonatomic) double averageCompositeTime;
@property (nonatomic) double averageRenderTime;
@property (nonatomic) double vsyncTime;
@property (nonatomic) double averageTotalTime;
@property (nonatomic) double averageTotalTimePercent;
@property (nonatomic) double averageCompositeTimePercent;
@property (nonatomic) double averageRenderTimePercent;
@property (retain, nonatomic) NSArray *predictedSamples;
@property (nonatomic) long long mode;

- (id)asDictionary;
- (id)_predictedSamplesDescription;

@end
