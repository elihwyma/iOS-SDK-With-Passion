/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@protocol GEODataSaverTileLoaderProxy <Swift>

@property (nonatomic, readonly, getter=isDataSaverEnabled) _Bool dataSaverEnabled;

- (unsigned short)_debug_initiateDataSaverPreload;

@end
