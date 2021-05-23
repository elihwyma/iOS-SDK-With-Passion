/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKHeartRateModel.h>

@class HKHeartRateSummary;

@interface NTKHeartRateSignatureRectangularModel : NTKHeartRateModel

{
    HKHeartRateSummary *_mostRecentHeartRateSummary;
}

@property (retain, nonatomic) HKHeartRateSummary *mostRecentHeartRateSummary;

- (void)manager:(id)arg1 receivedLatestHeartRateSummary:(id)arg2;

@end
