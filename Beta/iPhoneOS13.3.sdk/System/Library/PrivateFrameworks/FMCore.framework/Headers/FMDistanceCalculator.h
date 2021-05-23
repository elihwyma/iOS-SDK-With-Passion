/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class NSLocale, NSNumberFormatter, NSUserDefaults;

@protocol FMDistanceCalculatorLocalizationDelegate, OS_dispatch_queue;

@interface FMDistanceCalculator : NSObject

{
    NSObject<FMDistanceCalculatorLocalizationDelegate> *_localizationDelegate;
    NSLocale *_locale;
    NSLocale *_measurementSystemLocale;
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_calculationQueue;
    NSNumberFormatter *_formatter;
}

@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSLocale *measurementSystemLocale;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calculationQueue;
@property (retain, nonatomic) NSNumberFormatter *formatter;
@property (nonatomic) long long measurementSystem;
@property (weak, nonatomic) NSObject<FMDistanceCalculatorLocalizationDelegate> *localizationDelegate;

- (id)init;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)initWithDefaultsSuiteName:(id)arg1;
- (id)initWithDefaultsSuiteName:(id)arg1 locale:(id)arg2;
- (id)initWithDefaultsSuiteName:(id)arg1 locale:(id)arg2 measurementSystemLocale:(id)arg3;
- (id)_localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (id)_scaledAndConvertedMin:(double)arg1 andMax:(double)arg2;
- (id)_localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2 fractionDigits:(unsigned long long)arg3;
- (double)averageDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)futureLocalizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;

@end
