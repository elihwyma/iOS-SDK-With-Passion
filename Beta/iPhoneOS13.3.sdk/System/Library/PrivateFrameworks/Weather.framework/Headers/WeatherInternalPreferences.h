/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSUserDefaults.h>

@protocol WeatherPreferencesPersistence;

@interface WeatherInternalPreferences : NSUserDefaults

{
    id <WeatherPreferencesPersistence> _persistence;
}

@property (retain) id <WeatherPreferencesPersistence> persistence;
@property (readonly) _Bool isInternalInstall;
@property (readonly) _Bool isV3Enabled;
@property (readonly) _Bool shouldShowUpdateTimestamp;

+ (id)sharedInternalPreferences;

@end
