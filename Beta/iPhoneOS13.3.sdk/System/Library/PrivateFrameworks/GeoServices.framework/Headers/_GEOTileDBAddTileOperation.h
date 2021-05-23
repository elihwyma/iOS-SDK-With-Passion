/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOTileData, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTileDBAddTileOperation : NSObject

{
    struct _GEOTileKey _key;
    unsigned int _tileSet;
    GEOTileData *_data;
    NSString *_ETag;
    unsigned char _reason;
}

@property (nonatomic, readonly) struct _GEOTileKey *key;
@property (nonatomic, readonly) unsigned char reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long sizeInBytes;

- (void)performWithDB:(id)arg1;
- (_Bool)canIncreaseDataSizeInDB;
- (_Bool)isSupercededByOperation:(id)arg1;
- (id)dataForKey:(const struct _GEOTileKey *)arg1 ETag:(id *)arg2 originalLoadReason:(unsigned char *)arg3 isKnownNotToExist:(_Bool *)arg4;
- (id)initWithTileKey:(const struct _GEOTileKey *)arg1 tileSet:(unsigned int)arg2 data:(id)arg3 ETag:(id)arg4 reason:(unsigned char)arg5;

@end
