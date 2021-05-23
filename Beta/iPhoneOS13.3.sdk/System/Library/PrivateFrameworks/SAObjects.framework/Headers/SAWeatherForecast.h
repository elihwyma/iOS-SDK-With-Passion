/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString, SAWeatherCondition;

@interface SAWeatherForecast : AceObject <Swift>

@property (copy, nonatomic) NSNumber *chanceOfPrecipitation;
@property (retain, nonatomic) SAWeatherCondition *condition;
@property (copy, nonatomic) NSNumber *isUserRequested;
@property (copy, nonatomic) NSNumber *timeIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)forecast;
+ (id)forecastWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
