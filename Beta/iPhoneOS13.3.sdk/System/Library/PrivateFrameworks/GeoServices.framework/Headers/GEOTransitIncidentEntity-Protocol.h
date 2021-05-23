/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSSet;

@protocol GEOTransitIncidentEntity <Swift>

@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasNextStopIDs;
@property (nonatomic, readonly) NSSet *nextStopIDs;

@end
