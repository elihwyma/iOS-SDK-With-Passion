/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOAutomobileOptions, GEOTransitOptions, MKMapItem, _MKRouteETAFetcher;

@protocol MKAllRouteETAsManagerDelegate;

@interface MKAllRouteETAsManager : NSObject

{
    _MKRouteETAFetcher *_etaFetcher;
    id <MKAllRouteETAsManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <MKAllRouteETAsManagerDelegate> delegate;
@property (copy, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (copy, nonatomic) GEOTransitOptions *transitOptions;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) MKMapItem *originMapItem;

- (id)init;
- (id)routeETAForTransportType:(unsigned long long)arg1;
- (void)updateETA;

@end
