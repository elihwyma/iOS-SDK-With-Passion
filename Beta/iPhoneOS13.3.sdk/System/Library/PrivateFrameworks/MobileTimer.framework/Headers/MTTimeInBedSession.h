/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface MTTimeInBedSession : NSObject

{
    _Bool _needsAdditionalProcessing;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_intervals;
    unsigned long long _endReason;
    NSDictionary *_metadata;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSArray *intervals;
@property (nonatomic) unsigned long long endReason;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) _Bool needsAdditionalProcessing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long sampleType;

+ (_Bool)supportsSecureCoding;
+ (id)timeInBedSessionWithStartDate:(id)arg1 endDate:(id)arg2 intervals:(id)arg3 endReason:(unsigned long long)arg4 metadata:(id)arg5;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 intervals:(id)arg3 endReason:(unsigned long long)arg4 metadata:(id)arg5;

@end
