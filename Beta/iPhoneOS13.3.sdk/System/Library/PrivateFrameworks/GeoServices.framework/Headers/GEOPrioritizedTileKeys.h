/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOPrioritizedTileKeys : NSObject

{
    void *_keysAndPriorities;
}

@property (nonatomic, readonly) unsigned int highestPriority;
@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (void)dealloc;
- (void)removeKey:(const struct _GEOTileKey *)arg1;
- (void)setPriority:(unsigned int)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (_Bool)popHighestPriorityKey:(struct _GEOTileKey *)arg1 priority:(unsigned int *)arg2;
- (id)initWithKeys:(id)arg1 priorities:(id)arg2;

@end
