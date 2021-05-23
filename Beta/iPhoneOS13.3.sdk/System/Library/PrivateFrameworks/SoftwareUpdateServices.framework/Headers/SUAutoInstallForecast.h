/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class NSDate, _SUAutoInstallForecastDateCache;

@interface SUAutoInstallForecast : NSObject

{
    NSDate *_unlockStartDate;
    NSDate *_unlockEndDate;
    NSDate *_suStartDate;
    NSDate *_suEndDate;
    NSDate *_firstUnlock;
    _SUAutoInstallForecastDateCache *_lazy_forecastDateCache;
}

@property (retain, nonatomic) NSDate *unlockStartDate;
@property (retain, nonatomic) NSDate *unlockEndDate;
@property (retain, nonatomic) NSDate *suStartDate;
@property (retain, nonatomic) NSDate *suEndDate;
@property (retain, nonatomic) NSDate *firstUnlock;
@property (nonatomic, readonly) long long scheduleType;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_calendar;
- (_Bool)_isDateExpired:(id)arg1;
- (id)_forecastDateCache;
- (_Bool)_isForecastLogicallyExpired;
- (id)_roundedStartTime;
- (id)_roundedEndTime;

@end
