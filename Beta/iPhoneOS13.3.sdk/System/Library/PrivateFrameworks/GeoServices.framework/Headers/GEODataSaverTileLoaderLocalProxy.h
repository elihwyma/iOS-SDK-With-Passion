/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@interface GEODataSaverTileLoaderLocalProxy : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isDataSaverEnabled) _Bool dataSaverEnabled;

- (id)init;
- (void)_debug_initiateDataSaverPreload;
- (void)_removeOldRegionStateFromDisk;

@end
