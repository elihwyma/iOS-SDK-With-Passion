/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSProgress.h>

@interface NSProgress (GEOExtras)

+ (id)_geo_mirroredProgressForReceivingOverXPC:(id *)arg1;
+ (id)_geo_progressMirroringProgress:(id)arg1;
+ (id)_geo_newReportingXPCEndpointMirroringProgress:(id)arg1;
+ (id)_geo_mirroredProgressFromReceivingXPCEndpoint:(id)arg1;
+ (id)_geo_mirroredProgressFromReportingXPCEndpoint:(id)arg1 totalUnitCount:(long long)arg2;

- (void)_geo_mirroredProgressReplaceObservedProgressWith:(id)arg1;

@end
