/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@interface GEOUtilityServiceRemoteProxy : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)getHomeDirectoryPath;
- (id)getGeoServicesCacheDirectoryPath;
- (void)getCurrentGeoServicesState:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)_getPathSynchronous:(const char *)arg1;

@end
