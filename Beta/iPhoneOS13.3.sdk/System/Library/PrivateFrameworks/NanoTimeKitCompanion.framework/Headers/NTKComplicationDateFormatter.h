/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKComplicationDateFormatter : NSObject

+ (void)initialize;
+ (void)_handleSignificantTimeChange:(id)arg1;
+ (void)_handleLocaleChange:(id)arg1;
+ (id)dateFormatterForStyle:(unsigned long long)arg1;
+ (id)stringForDate:(id)arg1 withStyle:(unsigned long long)arg2;
+ (id)_localizedDayDateFormatter;

@end
