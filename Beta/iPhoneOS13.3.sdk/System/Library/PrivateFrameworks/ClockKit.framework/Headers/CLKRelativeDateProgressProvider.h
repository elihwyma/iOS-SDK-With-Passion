/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKProgressProvider.h>

@class NSDate;

@interface CLKRelativeDateProgressProvider : CLKProgressProvider

{
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

+ (_Bool)supportsSecureCoding;
+ (id)relativeDateProgressProviderWithStartDate:(id)arg1 endDate:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_validate;
- (id)JSONObjectRepresentation;
- (double)_progressFractionForNow:(id)arg1;
- (_Bool)_needsUpdates;

@end
