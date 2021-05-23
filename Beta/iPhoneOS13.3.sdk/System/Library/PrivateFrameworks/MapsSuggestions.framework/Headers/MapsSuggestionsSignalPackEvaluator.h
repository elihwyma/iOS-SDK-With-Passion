/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject

{
    MapsSuggestionsSignalPack *_signalPack;
}

+ (id)evaluatorFromSignalPack:(id)arg1;

- (_Bool)isWalkable;
- (_Bool)hasTouristInfo;
- (_Bool)hasCarPlayInfo;
- (_Bool)hasTransitInfo;
- (id)initWithSignalPack:(id)arg1;
- (_Bool)isTouristHere;
- (_Bool)hasWeatherTemperatureInfo;
- (_Bool)hasWeatherPrecipitationInfo;
- (_Bool)isHotWeather;
- (_Bool)isColdWeather;
- (_Bool)isHighChanceOfRaining;
- (_Bool)isHighChanceOfSnowing;
- (_Bool)hasWeatherInfo;
- (_Bool)isMildWeather;
- (_Bool)isLowChanceOfRaining;
- (_Bool)isLowChanceOfSnowing;
- (_Bool)isBadWeather;
- (_Bool)hasUserTransportTypePreferenceInfo;
- (_Bool)isUserPreferenceDriving;
- (_Bool)isUserPreferenceWalking;
- (_Bool)isUserPreferenceTransit;
- (_Bool)isUserPreferenceRidesharing;
- (_Bool)hasDistanceFromHereToDestinationInfo;
- (_Bool)hasDistanceFromHereToOriginInfo;
- (_Bool)hasDistanceFromOriginToDestinationInfo;
- (_Bool)isEasilyWalkable;
- (_Bool)isCarPlayConnected;
- (_Bool)hasMapTypeInfo;
- (_Bool)isMapTypeTransit;
- (_Bool)isTransitCurrentlyPossible;
- (_Bool)hasRidesharingInfo;
- (_Bool)isRideSharingAppsInstalled;

@end
