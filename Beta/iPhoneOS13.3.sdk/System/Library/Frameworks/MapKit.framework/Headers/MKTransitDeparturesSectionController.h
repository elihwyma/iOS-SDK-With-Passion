/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKTransitSectionController.h>

@class MKTransitDepartureServiceGapFormatter, NSArray, NSDictionary, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface MKTransitDeparturesSectionController : MKTransitSectionController

{
    NSString *_direction;
    NSArray *_sequences;
    NSMapTable *_sequencesToInclude;
    NSDictionary *_serviceGapStrings;
    _Bool _needsFindRowForServiceGap;
    _Bool _needsFindDeparturesAreVehicleSpecific;
    _Bool _departuresAreVehicleSpecific;
    MKTransitDepartureServiceGapFormatter *_serviceGapFormatter;
}

@property (retain, nonatomic) MKTransitDepartureServiceGapFormatter *serviceGapFormatter;
@property (nonatomic, readonly) _Bool showOperatingHours;
@property (nonatomic, readonly) _Bool departuresAreVehicleSpecific;

- (id)init;
- (id)sequences;
- (void)_setNeedsBuildRows;
- (id)_pagingFilter;
- (void)_buildRows;
- (id)initWithMapItem:(id)arg1 system:(id)arg2;
- (void)setDepartureCutoffDate:(id)arg1;
- (id)initWithMapItem:(id)arg1 system:(id)arg2 direction:(id)arg3;
- (id)sequenceForRow:(long long)arg1 outIsNewLine:(out _Bool *)arg2 outNextLineIsSame:(out _Bool *)arg3;
- (void)_serviceGapDate:(out id *)arg1 string:(out id *)arg2 forSequence:(id)arg3 withDepartureIndex:(unsigned long long)arg4;
- (_Bool)_isDateLastDeparture:(id)arg1 withNextDepartureDate:(id)arg2 forSequence:(id)arg3;
- (id)_nextLastDepartureDateForSequence:(id)arg1 afterDate:(id)arg2;
- (id)serviceGapDescriptionForRow:(long long)arg1;

@end
