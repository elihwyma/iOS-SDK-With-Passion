/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface geo_reentrant_isolater : NSObject

{
    char *_name;
    struct os_unfair_recursive_lock_s _lock;
}

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)initWithName:(const char *)arg1;

@end
