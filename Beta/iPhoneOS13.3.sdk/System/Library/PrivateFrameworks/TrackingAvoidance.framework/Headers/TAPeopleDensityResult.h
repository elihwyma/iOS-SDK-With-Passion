/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDateInterval, NSDictionary, NSString;

@interface TAPeopleDensityResult : NSObject

{
    long long _peopleDensityState;
    double _confidence;
    NSDateInterval *_observationInterval;
    NSDictionary *_additionalInfo;
    NSDate *_date;
}

@property (nonatomic, readonly) long long peopleDensityState;
@property (nonatomic, readonly) double confidence;
@property (copy, nonatomic, readonly) NSDateInterval *observationInterval;
@property (copy, nonatomic, readonly) NSDictionary *additionalInfo;
@property (copy, nonatomic, readonly) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionDictionary;
- (id)getDate;
- (id)initWithState:(long long)arg1 confidence:(double)arg2 observationInterval:(id)arg3 additionalInfo:(id)arg4 date:(id)arg5;

@end
