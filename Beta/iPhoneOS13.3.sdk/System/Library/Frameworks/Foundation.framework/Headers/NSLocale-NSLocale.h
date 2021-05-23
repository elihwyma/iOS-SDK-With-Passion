/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSLocale.h>

@interface NSLocale (NSLocale)

@property (readonly) long long _calendarDirection;

+ (id)_preferredTemperatureUnit;
+ (id)autoupdatingCurrentLocale;
+ (id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4;
+ (id)preferredLocale;
+ (id)systemLanguages;
+ (void)setPreferredLanguages:(id)arg1;
+ (void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3;
+ (id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (void)_setPreferredMeasurementSystem:(id)arg1;
+ (id)_preferredMeasurementSystem;
+ (void)_setPreferredTemperatureUnit:(id)arg1;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;

@end
