/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface HKAudiogramDataProviderCurrentValue : NSObject

{
    unsigned long long _diagnosticCategory;
    NSNumber *_leftAverageEarSensitivity;
    NSNumber *_rightAverageEarSensitivity;
    NSNumber *_minimumSensitivity;
    NSNumber *_maximumSensitivity;
    NSDate *_date;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;
- (id)initWithDiagnosticCategory:(unsigned long long)arg1 leftAverageEarSensitivity:(id)arg2 rightAverageEarSensitivity:(id)arg3 minimumSensitivity:(id)arg4 maximumSensitivity:(id)arg5 date:(id)arg6;
- (id)attributedSupplementaryStringWithDisplayType:(id)arg1 unitController:(id)arg2 font:(id)arg3 shortened:(_Bool)arg4;
- (id)lastUpdatedShortDescriptionWithDateCache:(id)arg1;
- (id)stringWithDisplayType:(id)arg1 unitController:(id)arg2;
- (id)attributedSupplementaryStringWithDisplayType:(id)arg1 unitController:(id)arg2 font:(id)arg3;
- (id)_stringWithDisplayType:(id)arg1 unitController:(id)arg2 shortened:(_Bool)arg3;
- (id)_rangeStringWithDisplayType:(id)arg1 unitController:(id)arg2;
- (id)_localizedAverageSensitivity:(id)arg1 ear:(long long)arg2 displayType:(id)arg3 unitController:(id)arg4 shortened:(_Bool)arg5;

@end
