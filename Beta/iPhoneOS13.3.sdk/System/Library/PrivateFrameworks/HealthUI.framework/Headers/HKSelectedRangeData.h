/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSNumber;

@interface HKSelectedRangeData : NSObject

{
    long long _statisticsType;
    long long _dataType;
    NSAttributedString *_attributedString;
    NSNumber *_valueAsNumber;
}

@property (nonatomic) long long statisticsType;
@property (nonatomic) long long dataType;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (retain, nonatomic) NSNumber *valueAsNumber;

- (id)initWithStatisticsType:(long long)arg1;

@end
