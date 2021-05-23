/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/Swift-Protocol.h>

@class NSArray, NSDate, NSDictionary;

@protocol MTBedtimeSession <Swift>

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSArray *intervals;
@property (nonatomic, readonly) long long sampleType;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) unsigned long long endReason;
@property (nonatomic, readonly) _Bool needsAdditionalProcessing;

@end
