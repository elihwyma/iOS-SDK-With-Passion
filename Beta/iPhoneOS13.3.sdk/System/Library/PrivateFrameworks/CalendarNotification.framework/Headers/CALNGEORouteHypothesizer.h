/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

#import <CalendarNotification/Swift-Protocol.h>

@class CADRouteHypothesis, EKTravelEngineHypothesis, GEORouteHypothesizer, NSString;

@interface CALNGEORouteHypothesizer : NSObject <Swift>

{
    CADRouteHypothesis *currentCADRouteHypothesis;
    GEORouteHypothesizer *_routeHypothesizer;
}

@property (nonatomic, readonly) GEORouteHypothesizer *routeHypothesizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) CADRouteHypothesis *currentCADRouteHypothesis;
@property (nonatomic, readonly) CDUnknownBlockType updateHandler;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) EKTravelEngineHypothesis *currentHypothesis;

- (void)startHypothesizingWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)stopHypothesizing;
- (void)requestRefresh;
- (void)didPostUINotification:(unsigned long long)arg1;
- (id)initWithRouteHypothesizer:(id)arg1;

@end
