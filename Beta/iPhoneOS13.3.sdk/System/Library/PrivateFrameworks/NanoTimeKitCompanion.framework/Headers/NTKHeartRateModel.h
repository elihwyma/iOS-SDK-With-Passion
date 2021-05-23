/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class HKQuantitySample;

@protocol NTKHeartRateModelDelegate;

@interface NTKHeartRateModel : NSObject

{
    id <NTKHeartRateModelDelegate> _delegate;
    HKQuantitySample *_mostRecentHeartRate;
}

@property (retain, nonatomic) HKQuantitySample *mostRecentHeartRate;
@property (weak, nonatomic, readonly) id <NTKHeartRateModelDelegate> delegate;

- (id)initWithDelegate:(id)arg1;
- (void)manager:(id)arg1 receivedLatestHeartRateSample:(id)arg2;

@end
