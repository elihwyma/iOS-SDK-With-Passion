/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOComposedTransitBaseRouteLeg.h>

@interface GEOComposedTransitStationRouteLeg : GEOComposedTransitBaseRouteLeg

- (_Bool)isTransfer;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 stepRange:(struct _NSRange)arg3 transitStepRange:(struct _NSRange)arg4 pointRange:(struct _NSRange)arg5;
- (_Bool)hasEnterStationManeuver;
- (_Bool)hasExitStationManeuver;

@end
