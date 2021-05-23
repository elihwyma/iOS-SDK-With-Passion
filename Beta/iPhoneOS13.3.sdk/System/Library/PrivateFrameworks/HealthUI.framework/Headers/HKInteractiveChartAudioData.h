/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HKInteractiveChartAudioData : NSObject

{
    double _averageLEQ;
    double _duration;
    HKInteractiveChartAudioData *_overviewData;
}

@property (nonatomic) double averageLEQ;
@property (nonatomic) double duration;
@property (retain, nonatomic) HKInteractiveChartAudioData *overviewData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_durationString:(double)arg1;

@end
