/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDDepartureSequence, NSArray, NSSet, NSString;

@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface _GEOTransitDepartureSequence : NSObject

{
    GEOPDDepartureSequence *_sequence;
    id <GEOTransitLine> _line;
    NSSet *_nextStopIDs;
    long long _displayStyle;
}

@property (nonatomic, readonly) NSArray *departures;
@property (nonatomic, readonly) NSArray *frequencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <GEOTransitLine> line;
@property (nonatomic, readonly) _Bool isLowFrequency;
@property (nonatomic, readonly) long long displayStyle;
@property (nonatomic, readonly) NSString *direction;
@property (nonatomic, readonly) NSString *headsign;
@property (nonatomic, readonly) NSArray *operatingHours;
@property (nonatomic, readonly) NSSet *nextStopIDs;

- (unsigned long long)stopId;
- (id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2;
- (id)firstDepartureValidForDate:(id)arg1;
- (_Bool)hasFrequencyAtDate:(id)arg1;
- (id)firstDepartureOnOrAfterDate:(id)arg1;
- (void)_enumerateDeparturesValidForDate:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)firstDepartureAfterDate:(id)arg1;
- (unsigned long long)numberOfDeparturesAfterDate:(id)arg1;
- (id)firstDepartureFrequencyOnOrAfterDate:(id)arg1;
- (id)firstOpenOperatingDateOnOrAfterDate:(id)arg1;
- (_Bool)isValidForDate:(id)arg1 inTimeZone:(id)arg2;
- (id)departuresValidForDate:(id)arg1;
- (double)frequencyForSortingAtDate:(id)arg1;
- (id)frequencyToDescribeAtDate:(id)arg1;
- (_Bool)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2;
- (id)initWithSequence:(id)arg1 line:(id)arg2 pbLine:(id)arg3;

@end
