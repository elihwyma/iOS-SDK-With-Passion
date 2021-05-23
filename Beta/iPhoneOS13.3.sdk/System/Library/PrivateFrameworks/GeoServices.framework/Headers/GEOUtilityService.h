/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@protocol GEOUtilityServiceProxy;

@interface GEOUtilityService : NSObject

{
    id <GEOUtilityServiceProxy> _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedService;
+ (void)useProxy:(Class)arg1;

- (id)init;
- (id)getHomeDirectoryPath;
- (id)getGeoServicesCacheDirectoryPath;
- (void)getCurrentGeoServicesState:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
