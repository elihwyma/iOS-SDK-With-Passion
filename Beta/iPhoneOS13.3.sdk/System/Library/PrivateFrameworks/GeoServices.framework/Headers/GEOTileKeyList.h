/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOTileKeyMap;

@interface GEOTileKeyList : NSObject

{
    void *_head;
    void *_tail;
    GEOTileKeyMap *_map;
    unsigned long long _count;
    unsigned long long _maxCount;
    unsigned long long _mutationsCount;
}

+ (id)formatOSLogData:(id)arg1;
+ (id)listFromXPCData:(id)arg1;

- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (struct _GEOTileKey *)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (_Bool)containsKey:(const struct _GEOTileKey *)arg1;
- (unsigned long long)capacity;
- (_Bool)removeKey:(const struct _GEOTileKey *)arg1;
- (void)addKey:(const struct _GEOTileKey *)arg1;
- (struct _GEOTileKey *)firstKey;
- (id)initWithMaxCapacity:(unsigned long long)arg1;
- (void)_addKeyToBack:(const struct _GEOTileKey *)arg1;
- (_Bool)addKey:(const struct _GEOTileKey *)arg1 lostKey:(struct _GEOTileKey *)arg2;
- (_Bool)intersectsList:(id)arg1;
- (id)copyWithMaxCapacity:(unsigned long long)arg1;
- (id)listWithout:(id)arg1;
- (id)sublistWithRange:(struct _NSRange)arg1;
- (void)sort:(CDUnknownBlockType)arg1;
- (void)removeKeysMatchingPredicate:(CDUnknownBlockType)arg1;
- (id)newXPCData;

@end
