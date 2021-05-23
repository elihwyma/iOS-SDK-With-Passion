/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSXPCConnection.h>

@interface NSXPCConnection (GEODaemonToMapsPushDaemon)

+ (id)geo_createGEODaemonToMapsPushDaemonConnection;
+ (void)geo_withMapsPushDaemon:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;

@end
