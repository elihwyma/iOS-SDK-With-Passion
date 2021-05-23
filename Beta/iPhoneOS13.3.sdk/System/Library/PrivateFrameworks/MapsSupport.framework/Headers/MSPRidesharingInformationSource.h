/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class GEOComposedWaypoint, NSString;

@interface MSPRidesharingInformationSource : NSObject

{
    GEOComposedWaypoint *_startWaypoint;
    GEOComposedWaypoint *_endWaypoint;
}

@property (nonatomic, readonly, getter=_startWaypoint) GEOComposedWaypoint *startWaypoint;
@property (nonatomic, readonly, getter=_endWaypoint) GEOComposedWaypoint *endWaypoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)ifRidesharingInformationSource;
- (id)ifGEOStorageRouteRequestStorage;
- (id)initWithStartWaypoint:(id)arg1 endWaypoint:(id)arg2;

@end
