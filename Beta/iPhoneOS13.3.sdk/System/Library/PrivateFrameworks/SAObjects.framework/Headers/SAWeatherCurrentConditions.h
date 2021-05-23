/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString, SAWeatherBarometricPressure, SAWeatherCondition, SAWeatherWindSpeed;

@interface SAWeatherCurrentConditions : AceObject <Swift>

@property (retain, nonatomic) SAWeatherBarometricPressure *barometricPressure;
@property (retain, nonatomic) SAWeatherCondition *condition;
@property (copy, nonatomic) NSNumber *dayOfWeek;
@property (copy, nonatomic) NSString *dewPoint;
@property (copy, nonatomic) NSString *heatIndex;
@property (copy, nonatomic) NSString *moonPhase;
@property (copy, nonatomic) NSString *percentHumidity;
@property (copy, nonatomic) NSNumber *percentOfMoonFaceVisible;
@property (copy, nonatomic) NSString *sunrise;
@property (copy, nonatomic) NSString *sunset;
@property (copy, nonatomic) NSString *temperature;
@property (copy, nonatomic) NSString *timeOfObservation;
@property (copy, nonatomic) NSString *timeZone;
@property (copy, nonatomic) NSString *totalDailyPrecipitation;
@property (copy, nonatomic) NSNumber *uvIndex;
@property (copy, nonatomic) NSString *visibility;
@property (copy, nonatomic) NSString *windChill;
@property (retain, nonatomic) SAWeatherWindSpeed *windSpeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)currentConditions;
+ (id)currentConditionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
