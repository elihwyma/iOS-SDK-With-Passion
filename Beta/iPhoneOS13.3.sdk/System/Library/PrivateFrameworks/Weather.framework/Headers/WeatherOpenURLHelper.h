/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@interface WeatherOpenURLHelper : NSObject

+ (id)URLForWeatherCityComponents:(id)arg1;
+ (_Bool)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)cityFromURLComponents:(id)arg1 listedCities:(id)arg2;
+ (void)displayCity:(id)arg1 usingController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)presentAddTransientCityDialog:(id)arg1 usingController:(id)arg2;
+ (id)transientCityFromURLComponents:(id)arg1;
+ (id)URLForCity:(id)arg1;
+ (_Bool)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2;

@end
