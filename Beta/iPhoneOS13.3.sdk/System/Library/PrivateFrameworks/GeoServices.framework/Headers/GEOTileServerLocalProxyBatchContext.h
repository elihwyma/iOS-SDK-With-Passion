/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOTileKeyList, GEOTileRequester;

__attribute__((visibility("hidden")))
@interface GEOTileServerLocalProxyBatchContext : NSObject

{
    GEOTileKeyList *_fullList;
    GEOTileKeyList *_interestList;
    GEOTileKeyList *_networkList;
    GEOTileKeyList *_pendingNetworkList;
    GEOTileKeyList *_cacheMissNoDataList;
    GEOTileKeyList *_cacheMissStaleDataList;
    GEOTileKeyList *_cacheMissStaleUnusableDataList;
    unsigned char _loadReason;
    GEOTileRequester *_tileRequester;
}

@property (retain, nonatomic) GEOTileKeyList *fullList;
@property (retain, nonatomic) GEOTileKeyList *interestList;
@property (retain, nonatomic) GEOTileKeyList *networkList;
@property (retain, nonatomic) GEOTileKeyList *pendingNetworkList;
@property (retain, nonatomic) GEOTileKeyList *cacheMissNoDataList;
@property (retain, nonatomic) GEOTileKeyList *cacheMissStaleDataList;
@property (retain, nonatomic) GEOTileKeyList *cacheMissStaleUnusableDataList;
@property (nonatomic) unsigned char loadReason;
@property (retain, nonatomic) GEOTileRequester *tileRequester;

@end
