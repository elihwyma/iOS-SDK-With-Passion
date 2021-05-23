/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@class NSSet;

@protocol GEOTransitIncidentEntity <Swift>

@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasNextStopIDs;
@property (nonatomic, readonly) NSSet *nextStopIDs;

@end
