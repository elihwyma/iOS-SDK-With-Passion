/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PGPublicEventCriteria : NSObject

{
    _Bool _allowsExpandingTimeAttendance;
    NSString *_eventCategory;
    double _minimumTimeAttendance;
    double _maximumDistance;
    long long _minimumAttendance;
    NSArray *_disambiguationCriteria;
    NSArray *_highConfidenceCriteria;
    NSArray *_prohibitedCriteria;
}

@property (retain, nonatomic) NSString *eventCategory;
@property (nonatomic) double minimumTimeAttendance;
@property (nonatomic) double maximumDistance;
@property (nonatomic) _Bool allowsExpandingTimeAttendance;
@property (nonatomic) long long minimumAttendance;
@property (retain, nonatomic) NSArray *disambiguationCriteria;
@property (retain, nonatomic) NSArray *highConfidenceCriteria;
@property (retain, nonatomic) NSArray *prohibitedCriteria;
@property (nonatomic, readonly) _Bool hasMinimumAttendance;

- (_Bool)_hasSufficientTimeOverlapForEvent:(id)arg1 matchingOptions:(id)arg2;
- (_Bool)_isMatchingMeaningDisambiguationForEvent:(id)arg1 matchingOptions:(id)arg2 withHighConfidence:(_Bool *)arg3;
- (_Bool)isMatchingEvent:(id)arg1 matchingOptions:(id)arg2 withHighConfidence:(_Bool *)arg3 matchingDistance:(double *)arg4;

@end
