/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPMutableHistoryEntry.h>

@class GEOComposedWaypoint, GEOURLRouteHandle, NSDate, NSString;

@protocol MSPRouteInformationSource;

@interface MSPMutableHistoryEntryRoute : MSPMutableHistoryEntry

{
    id <MSPRouteInformationSource> _routeInformationSource;
}

@property (copy, nonatomic) id <MSPRouteInformationSource> routeInformationSource;
@property (nonatomic, getter=navigationWasInterrupted) _Bool navigationInterrupted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDate *usageDate;
@property (nonatomic, readonly) _Bool tracksRAPReportingOnly;
@property (nonatomic, readonly) long long transportType;
@property (nonatomic, readonly) GEOComposedWaypoint *startWaypoint;
@property (nonatomic, readonly) GEOComposedWaypoint *endWaypoint;
@property (nonatomic, readonly) GEOURLRouteHandle *routeHandle;
@property (nonatomic, readonly) _Bool navigationWasInterrupted;

+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;

- (id)initWithStorage:(id)arg1;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)_routeRequestStorage;
- (_Bool)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;

@end
