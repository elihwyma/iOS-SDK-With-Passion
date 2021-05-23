/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

#import <SoftwareUpdateServices/SUAutoInstallForecast.h>

@interface SUSUIFakeSUAutoInstallForecast : SUAutoInstallForecast

{
    double _now;
}

- (double)_now;
- (id)suEndDate;
- (id)suStartDate;
- (long long)scheduleType;
- (id)unlockStartDate;
- (id)unlockEndDate;
- (id)firstUnlock;

@end
