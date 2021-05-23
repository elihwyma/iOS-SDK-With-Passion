/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSMassFormatter;

@interface HKPersonWeightFormatter : NSObject

{
    NSMassFormatter *_massFormatter;
    long long _localWeightUnit;
}

@property (nonatomic, readonly) long long localWeightUnit;

+ (id)sharedFormatter;

- (id)init;
- (void)dealloc;
- (void)_commonInit;
- (void)_localeChanged:(id)arg1;
- (id)stringFromWeightInKilograms:(id)arg1;
- (void)_updateRoundingIncrement;
- (id)stringFromWeightValue:(double)arg1 inUnit:(long long)arg2;

@end
