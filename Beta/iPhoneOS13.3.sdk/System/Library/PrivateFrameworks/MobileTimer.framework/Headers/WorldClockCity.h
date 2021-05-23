/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class ALCity, NSDictionary, NSNumber, NSString, NSURL;

@interface WorldClockCity : NSObject

{
    ALCity *_alCity;
    NSString *_timeZone;
    NSString *_name;
    NSString *_countryName;
    NSString *_countryCode;
    NSString *_unlocalizedName;
    NSString *_unlocalizedCountryName;
}

@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) ALCity *alCity;
@property (nonatomic, readonly) NSNumber *alCityId;
@property (nonatomic, readonly) NSString *timeZone;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *countryName;
@property (nonatomic, readonly) NSString *unlocalizedCityName;
@property (nonatomic, readonly) NSString *unlocalizedCountryName;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSURL *idUrl;

+ (_Bool)isWorldClockCityProperties:(id)arg1;
+ (_Bool)isCachedLanguageStaleForProperties:(id)arg1;
+ (_Bool)isCachedLanguageStaleForProperties:(id)arg1 systemLanguage:(id)arg2;
+ (id)unlocalizedExampleCity;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithProperties:(id)arg1;
- (id)initWithALCity:(id)arg1;
- (id)initWithTimeZone:(id)arg1 countryCode:(id)arg2 name:(id)arg3 countryName:(id)arg4 unlocalizedName:(id)arg5 unlocalizedCountryName:(id)arg6;
- (id)initWithALCityIdentifier:(int)arg1;

@end
