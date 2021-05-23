/*
 Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

#import <Foundation/NSObject.h>

@class CompassAtlasManifest;

@interface CompassAtlas : NSObject

{
    unsigned int _texName;
    CompassAtlasManifest *_manifest;
    struct CGSize _size;
}

- (void)dealloc;
- (void)bind;
- (id)initWithImageData:(char *)arg1 manifest:(id)arg2;
- (CDStruct_cfd1ab65)metadataForImageNamed:(id)arg1;

@end
