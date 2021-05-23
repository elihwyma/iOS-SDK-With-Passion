/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class AVTAssetInfo, NSArray, NSDictionary, NSString;

@interface AVTAsset : NSObject

{
    long long _componentType;
    AVTAssetInfo *_assetInfo;
    NSString *_uid;
    NSString *_bundlePath;
    NSArray *_morphVariants;
    NSString *_ao;
    NSDictionary *_highlights;
    unsigned long long _refCount;
    unsigned char _resourceType;
    id _cachedResource;
    _Bool _forceHighTessellation;
    NSDictionary *_specializationSettings;
    NSDictionary *_layers;
    NSDictionary *_perAssetMain;
    CDStruct_10883d13 _uvRemappingInfo;
    double _imageScale;
    struct CGSize _imageOffset;
    _Bool _imageMirror;
}

@property (readonly) long long componentType;
@property (readonly) NSString *uid;
@property (readonly) NSString *ao;
@property (readonly) NSArray *morphVariants;
@property (readonly) NSDictionary *specializationSettings;
@property (readonly) NSDictionary *layers;
@property (readonly) _Bool is2DAsset;
@property (readonly) _Bool is3DAsset;
@property (readonly) CDStruct_10883d13 uvRemappingInfo;
@property (readonly) double imageScale;
@property (readonly) struct CGSize imageOffset;
@property (readonly) _Bool imageMirror;

- (id)description;
- (id)assetInfo;
- (void)freeCache;
- (id)instantiateResource;
- (id)cachedResource;
- (id)initWithType:(long long)arg1 path:(id)arg2 packID:(id)arg3;
- (void)incrUseCount;
- (void)decrUseCount;
- (id)perAssetMain;
- (id)resourceForCaching:(_Bool)arg1;

@end
