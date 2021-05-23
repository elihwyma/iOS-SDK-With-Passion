/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@protocol GEODataSaverTileLoaderProxy;

@interface GEODataSaverTileLoaderManager : NSObject

{
    id <GEODataSaverTileLoaderProxy> _proxy;
}

@property (nonatomic, readonly, getter=isDataSaverEnabled) _Bool dataSaverEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (void)useProxyClass:(Class)arg1;

- (id)init;
- (void)_debug_initiateDataSaverPreload;

@end
