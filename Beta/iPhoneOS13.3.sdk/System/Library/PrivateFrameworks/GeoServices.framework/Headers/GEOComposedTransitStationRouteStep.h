/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOComposedTransitRouteStep.h>

@class GEOPBTransitAccessPoint, GEOTransitEnterExitInfo, GEOTransitTransferInfo, NSString;

@interface GEOComposedTransitStationRouteStep : GEOComposedTransitRouteStep

{
    unsigned int _expectedTime;
    _Bool _isArrivalUncertain;
    GEOTransitTransferInfo *_transitTransfer;
    GEOTransitEnterExitInfo *_enterExitInfo;
    GEOPBTransitAccessPoint *_accessPoint;
}

@property (nonatomic, readonly) GEOPBTransitAccessPoint *accessPoint;
@property (nonatomic, readonly) unsigned int expectedTime;
@property (nonatomic, readonly) GEOTransitTransferInfo *transitTransfer;
@property (nonatomic, readonly) _Bool isArrivalUncertain;
@property (nonatomic, readonly) NSString *exitSign;
@property (nonatomic, readonly) _Bool displayStop;
@property (nonatomic, readonly) _Bool hasDisplayStop;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CDStruct_39925896)startGeoCoordinate;
- (CDStruct_39925896)endGeoCoordinate;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange)arg6;

@end
