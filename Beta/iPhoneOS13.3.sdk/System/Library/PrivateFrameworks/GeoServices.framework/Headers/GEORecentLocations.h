/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSXPCConnection;

@interface GEORecentLocations : NSObject

{
    NSXPCConnection *_connection;
}

- (id)init;
- (void)requestRecentLocationsWithResponse:(CDUnknownBlockType)arg1;

@end
