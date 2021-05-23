/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, SAUIAppPunchOut, SAUIImageResource;

@interface SAWeatherForecastSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *aceWeathers;
@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (retain, nonatomic) SAUIImageResource *attributionImage;

+ (id)forecastSnippet;
+ (id)forecastSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
