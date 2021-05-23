/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDResultDetourInfo, NSData;

@interface GEOMapItemDetourInfo : NSObject

{
    GEOPDResultDetourInfo *_detourInfo;
}

@property (nonatomic, readonly, getter=_detourInfo) GEOPDResultDetourInfo *detourInfo;
@property (nonatomic, readonly) double detourTime;
@property (nonatomic, readonly) double timeToPlace;
@property (nonatomic, readonly) double detourDistance;
@property (nonatomic, readonly) double distanceToPlace;
@property (nonatomic, readonly) NSData *detourInfoAsData;

- (id)init;
- (id)initWithResultDetourInfo:(id)arg1;

@end
