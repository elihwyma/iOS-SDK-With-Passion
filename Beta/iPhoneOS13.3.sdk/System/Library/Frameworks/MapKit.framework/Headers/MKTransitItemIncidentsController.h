/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapItem, NSArray, NSDate, NSMutableDictionary, NSSet;

@protocol GEOTransitLineItem;

__attribute__((visibility("hidden")))
@interface MKTransitItemIncidentsController : NSObject

{
    MKMapItem *_mapItem;
    id <GEOTransitLineItem> _lineItem;
    NSArray *_validIncidents;
    NSMutableDictionary *_incidentsForDepartureSequence;
    NSMutableDictionary *_incidentsForSystem;
    NSMutableDictionary *_incidentsForLine;
    NSMutableDictionary *_incidentsForMapItem;
    NSSet *_blockedIncidentEntities;
    NSDate *_referenceDate;
}

@property (retain, nonatomic) NSDate *referenceDate;

- (id)initWithMapItem:(id)arg1;
- (void)resetCache;
- (id)_incidentsAffectingMuid:(unsigned long long)arg1;
- (id)incidentsForSystem:(id)arg1;
- (id)incidentsForLine:(id)arg1;
- (id)initWithLineItem:(id)arg1;
- (id)validIncidents;
- (id)incidentsForMapItem:(id)arg1;
- (id)incidentsForDepartureSequence:(id)arg1;
- (id)blockedIncidentEntities;

@end
