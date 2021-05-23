/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapAccessTransitNodeBase.h>

@class NSString;

@protocol GEOMapTransitHall;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitStop : GEOMapAccessTransitNodeBase

{
    id <GEOMapTransitHall> _hall;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
@property (nonatomic, readonly) unsigned long long transitID;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic, readonly) double boundingRadius;
@property (nonatomic, readonly) CDStruct_90e2a262 boundingRect;
@property (nonatomic, readonly) CDStruct_c3b9c2ee *polygonPoints;
@property (nonatomic, readonly) long long polygonPointsCount;
@property (nonatomic, readonly) unsigned long long hallID;

- (id)findAccessPoints:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findHall:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findLinksIn:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findLinksOut:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
