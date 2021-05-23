/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface geo_isolater : NSObject

{
    char *_name;
    struct os_unfair_lock_s _lock;
}

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)initWithName:(const char *)arg1;

@end
