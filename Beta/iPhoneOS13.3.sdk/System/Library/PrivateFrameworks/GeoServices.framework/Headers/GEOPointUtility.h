/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOPointUtility : NSObject

+ (unsigned long long)pointCount:(id)arg1 usesZilch:(_Bool)arg2;
+ (id)unpackZilchPoints:(id)arg1;
+ (id)unpackBasicPoints:(id)arg1;
+ (void *)controlPoints:(id)arg1 usesZilch:(_Bool)arg2;
+ (CDStruct_39925896)pointAt:(unsigned long long)arg1 pointData:(id)arg2 usesZilch:(_Bool)arg3;
+ (id)unpackPoints:(id)arg1 usesZilch:(_Bool)arg2;
+ (id)zilchData:(id)arg1 fromPointIndex:(unsigned long long)arg2;
+ (id)subdataFromPointData:(id)arg1 fromPointIndex:(unsigned long long)arg2 usesZilch:(_Bool)arg3;

@end
