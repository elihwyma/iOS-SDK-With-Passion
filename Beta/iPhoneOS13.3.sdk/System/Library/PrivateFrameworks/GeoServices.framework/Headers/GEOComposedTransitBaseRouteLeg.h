/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOComposedRouteLeg.h>

@interface GEOComposedTransitBaseRouteLeg : GEOComposedRouteLeg

{
    struct _NSRange _transitStepRange;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepRange:(struct _NSRange)arg3 transitStepRange:(struct _NSRange)arg4 pointRange:(struct _NSRange)arg5;
- (id)startingTransitStop;
- (id)endingTransitStop;
- (struct _NSRange)transitStepRange;

@end
