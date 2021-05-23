/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKQuantity, NSDate, NSString;

@interface HKAudioExposureDataProviderCurrentValue : NSObject

{
    unsigned long long _classification;
    HKQuantity *_leqQuantity;
    double _secondsListened;
    long long _daysAggregated;
    NSDate *_date;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;
- (id)initWithLEQQuantity:(id)arg1 secondsListened:(double)arg2 daysAggregated:(long long)arg3 date:(id)arg4;
- (id)lastUpdatedShortDescriptionWithDateCache:(id)arg1;
- (id)stringWithDisplayType:(id)arg1 unitController:(id)arg2;
- (id)attributedSupplementaryStringWithDisplayType:(id)arg1 unitController:(id)arg2 font:(id)arg3;
- (id)_attributedSymbolForClassification:(unsigned long long)arg1 font:(id)arg2;

@end
