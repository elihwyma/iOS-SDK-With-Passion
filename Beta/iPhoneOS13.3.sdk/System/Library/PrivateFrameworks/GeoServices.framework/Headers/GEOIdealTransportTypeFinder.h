/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOIdealTransportTypeFinder : NSObject

+ (id)_transportTypePreferenceAsString:(long long)arg1;
+ (long long)idealTransportTypeForOrigin:(CDStruct_c3b9c2ee)arg1 destination:(CDStruct_c3b9c2ee)arg2 mapType:(int)arg3;
+ (long long)idealTransportTypeForMapType:(int)arg1;
+ (long long)idealTransportType;

@end
