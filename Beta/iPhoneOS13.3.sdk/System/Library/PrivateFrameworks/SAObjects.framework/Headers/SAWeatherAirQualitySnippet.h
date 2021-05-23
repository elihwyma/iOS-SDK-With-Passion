/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, SAUIAppPunchOut, SAUIImageResource;

@interface SAWeatherAirQualitySnippet : SAUISnippet

@property (copy, nonatomic) NSArray *aceAirQualities;
@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (retain, nonatomic) SAUIImageResource *attributionImage;

+ (id)airQualitySnippet;
+ (id)airQualitySnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
