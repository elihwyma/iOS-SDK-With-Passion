/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@interface GEOVenueFloorInfo : NSObject

{
    short _ordinal;
    unsigned long long _levelID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) short ordinal;
@property (nonatomic, readonly) unsigned long long levelID;

+ (_Bool)isIntegerValidOrdinal:(long long)arg1;
+ (id)floorInfosFromLevels:(id)arg1;

- (id)init;
- (id)initWithLevel:(id)arg1;
- (id)initWithOrdinal:(short)arg1 levelID:(unsigned long long)arg2;

@end
