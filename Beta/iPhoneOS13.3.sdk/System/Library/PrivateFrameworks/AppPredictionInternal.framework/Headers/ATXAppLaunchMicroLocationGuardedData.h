/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXLocationToLaunchCorrelation, NSDate, NSDictionary;

@interface ATXAppLaunchMicroLocationGuardedData : NSObject

{
    NSDictionary *_currentMicroLocation;
    NSDate *_currentMicroLocationDate;
    ATXLocationToLaunchCorrelation *_locationToAppLaunchCorrelation;
    ATXLocationToLaunchCorrelation *_locationToActionKeyCorrelation;
}

- (id)initWithCurrentMicroLocation:(id)arg1;
- (void)setCurrentMicroLocation:(id)arg1;
- (id)getCurrentMicroLocation;
- (_Bool)microLocationExpired:(id)arg1;

@end
