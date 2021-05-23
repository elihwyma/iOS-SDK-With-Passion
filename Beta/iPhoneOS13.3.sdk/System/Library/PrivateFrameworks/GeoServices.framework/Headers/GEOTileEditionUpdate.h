/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject

{
    NSMutableArray *_entries;
    _Bool _flushEverything;
    _Bool _invalidateEverything;
}

@property (nonatomic) _Bool flushEverything;
@property (nonatomic) _Bool invalidateEverything;

- (id)init;
- (unsigned long long)tilesetCount;
- (void)tileset:(unsigned int *)arg1 edition:(unsigned int *)arg2 provider:(unsigned int *)arg3 invalidateOnly:(_Bool *)arg4 atIndex:(unsigned long long)arg5;
- (void)addTileset:(unsigned int)arg1 edition:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(_Bool)arg4;

@end
