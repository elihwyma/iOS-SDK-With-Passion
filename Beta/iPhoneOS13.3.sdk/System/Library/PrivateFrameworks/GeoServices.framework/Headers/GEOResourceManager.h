/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOResourceManifestConfiguration;

@interface GEOResourceManager : NSObject

{
    GEOResourceManifestConfiguration *_configuration;
}

+ (id)sharedManager;
+ (id)sharedManagerForConfiguration:(id)arg1;
+ (id)sharedManagerForTileGroupIdentifier:(unsigned int)arg1;

- (id)initWithConfiguration:(id)arg1;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3;
- (id)allResourceNames;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;
- (_Bool)isDevResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3;

@end
