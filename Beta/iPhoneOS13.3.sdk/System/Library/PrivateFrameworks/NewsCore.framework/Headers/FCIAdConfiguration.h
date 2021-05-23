/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NTPBIAdConfig;

@interface FCIAdConfiguration : NSObject

{
    NTPBIAdConfig *_pbConfig;
    NSDictionary *_configDict;
    _Bool _segmentsEnabled;
    double _segmentsThreshold;
    long long _segmentsSubmissionFrequency;
    long long _segmentsHistoryWindowInterval;
    long long _segmentsMinimumArticleCount;
    NSArray *_iAdSegmentIDs;
    NSDictionary *_adStatusConditionsByType;
}

@property (nonatomic, readonly, getter=areSegmentsEnabled) _Bool segmentsEnabled;
@property (nonatomic, readonly) double segmentsThreshold;
@property (nonatomic, readonly) long long segmentsSubmissionFrequency;
@property (nonatomic, readonly) long long segmentsHistoryWindowInterval;
@property (nonatomic, readonly) long long segmentsMinimumArticleCount;
@property (nonatomic, readonly) NSArray *iAdSegmentIDs;
@property (nonatomic, readonly) NSDictionary *adStatusConditionsByType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPBIAdConfig:(id)arg1;

@end
