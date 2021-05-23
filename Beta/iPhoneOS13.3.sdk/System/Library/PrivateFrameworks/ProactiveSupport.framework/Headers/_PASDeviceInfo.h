/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@interface _PASDeviceInfo : NSObject

{
    int _batterySaverModeToken;
}

+ (id)sharedInstance;
+ (id)deviceUUID;
+ (_Bool)isInternalBuild;
+ (_Bool)isAudioAccessory;
+ (_Bool)isLowEndHardware;
+ (_Bool)isBatterySaverEnabled;
+ (_Bool)isDemoModeEnabled;
+ (_Bool)isBetaBuild;
+ (_Bool)isDNUEnabled;
+ (_Bool)shouldIncludePredictionLogs;

- (id)init;
- (void)dealloc;

@end
