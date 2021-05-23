/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOTileKeyMap : NSObject

{
    long long _type;
    void *_map;
}

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)objectForKey:(const struct _GEOTileKey *)arg1;
- (void)removeObjectForKey:(const struct _GEOTileKey *)arg1;
- (void)setObject:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (void)reserveCapacity:(unsigned long long)arg1;
- (id)initWithMapType:(long long)arg1;
- (id)contentsDescription;

@end
