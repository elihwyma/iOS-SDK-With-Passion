/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOEditionEntry : NSObject

{
    unsigned int _tileset;
    unsigned int _edition;
    unsigned int _provider;
    _Bool _invalidateOnly;
}

@property (nonatomic) unsigned int tileset;
@property (nonatomic) unsigned int edition;
@property (nonatomic) unsigned int provider;
@property (nonatomic) _Bool invalidateOnly;

@end
