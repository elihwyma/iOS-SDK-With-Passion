/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKEventStore, EKStructuredLocation, NSDate, NSDictionary, NSMutableArray;

@protocol EKStyleProvider, EKTravelRouteEstimationControllerDelegate;

@interface EKTravelRouteEstimationController : NSObject

{
    EKEventStore *_eventStore;
    id <EKStyleProvider> _styleProvider;
    EKStructuredLocation *_originStructuredLocation;
    NSMutableArray *_rows;
    _Bool _isEstimating;
    id <EKTravelRouteEstimationControllerDelegate> _delegate;
    NSDate *_arrivalDate;
    EKStructuredLocation *_destinationStructuredLocation;
    EKStructuredLocation *_evaluatedOriginLocation;
    NSDictionary *_travelTimeEstimatedValues;
    NSDictionary *_travelTimeLookupErrors;
}

@property (retain) EKStructuredLocation *evaluatedOriginLocation;
@property (retain) NSDictionary *travelTimeEstimatedValues;
@property (retain) NSDictionary *travelTimeLookupErrors;
@property _Bool isEstimating;
@property (weak, nonatomic) id <EKTravelRouteEstimationControllerDelegate> delegate;
@property (retain) NSDate *arrivalDate;
@property (retain, nonatomic) EKStructuredLocation *originStructuredLocation;
@property (retain) EKStructuredLocation *destinationStructuredLocation;
@property (nonatomic, readonly) unsigned long long numberOfOutputRows;

+ (id)_basedOnLocationLocalizedString;

- (void)dealloc;
- (void)_beginOriginLocationEstimationEventKitLookup;
- (void)_originLocationEstimationCompletedCoreRoutineLookup;
- (void)_originLocationEstimationCompletedEventKitLookup;
- (void)_beginOriginLocationEstimationCoreRoutineLookup;
- (void)_lookupTimedOut;
- (id)_routingModeTypesAsEnum;
- (double)_estimatedTravelTimeValueAtRowIndex:(unsigned long long)arg1;
- (long long)_estimatedTravelTimeRoutingModeAtRowIndex:(unsigned long long)arg1;
- (id)_estimatedTravelTimeRowErrorAtRowIndex:(unsigned long long)arg1;
- (_Bool)_estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned long long)arg1;
- (id)_imageForCellAtIndex:(unsigned long long)arg1;
- (id)initWithDestinationStructuredLocation:(id)arg1 styleProvider:(id)arg2 eventStore:(id)arg3;
- (void)beginOriginLocationEstimationLookup;
- (void)beginTravelTimeEstimationLookup;
- (double)estimatedTravelTimeValueAtRowIndex:(unsigned long long)arg1;
- (id)estimatedTravelTimeRowErrorAtRowIndex:(unsigned long long)arg1;
- (_Bool)estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned long long)arg1;
- (long long)estimatedTravelTimeRoutingModeAtRowIndex:(unsigned long long)arg1;
- (id)estimatedTravelTimeTableViewCellWithRowIndex:(unsigned long long)arg1;

@end
