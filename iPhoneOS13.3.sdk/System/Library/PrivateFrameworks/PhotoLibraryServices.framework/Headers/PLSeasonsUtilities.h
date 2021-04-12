//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLSeasonsUtilities : NSObject
{
}

+ (BOOL)isCountryCodePartOfSouthernHemisphere:(id)arg1;
+ (BOOL)isCountryCodePartOfNorthernHemisphere:(id)arg1;
+ (id)_seasonCountryCodesDictionary;
+ (id)_southernMeteorologicalSeasonKeyForMonthNumber:(NSUInteger)arg1;
+ (id)_northernMeteorologicalSeasonKeyForMonthNumber:(NSUInteger)arg1;
+ (id)_seasonKeyForMonthNumber:(NSUInteger)arg1 locale:(id)arg2;
+ (id)_seasonNameForKey:(id)arg1;
+ (id)localizedSeasonNameForDate:(id)arg1 calendar:(id)arg2 locale:(id)arg3;

@end

