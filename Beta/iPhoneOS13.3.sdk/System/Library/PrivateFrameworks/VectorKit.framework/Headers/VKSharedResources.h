/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString, VKInternalIconManager, VKResourceManager;

__attribute__((visibility("hidden")))
@interface VKSharedResources : NSObject

{
    struct _retain_ptr<VKInternalIconManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKInternalIconManager *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _iconManager;
    shared_ptr_f2399894 _textureManager;
    struct _retain_ptr<VKResourceManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _resourceManager;
    shared_ptr_dd2d1f5e _stylesheetVendor;
    shared_ptr_887a193f _dataOverrideManager;
    struct unique_ptr<md::Device, std::__1::default_delete<md::Device>> _device;
    struct unique_ptr<ggl::AlphaAtlas, std::__1::default_delete<ggl::AlphaAtlas>> _alphaAtlas;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas>> _highInflationAlphaAtlas;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas>> _isoAlphaAtlas;
    struct unique_ptr<ggl::DistanceAtlas, std::__1::default_delete<ggl::DistanceAtlas>> _distanceAtlas;
    shared_ptr_1ddd16cb _shaderLibrary;
    struct FigPhotoDecompressionSession *_defaultDecompressionSession;
    struct shared_ptr<md::GeoResourceProvider> _resourceProvider;
    shared_ptr_6d521cf7 _grlIconManager;
    shared_ptr_76a6df1b _grlFontManager;
    unsigned int _referenceCount;
}

@property (nonatomic, readonly) VKInternalIconManager *iconManager;
@property (nonatomic, readonly) shared_ptr_f2399894 textureManager;
@property (nonatomic, readonly) VKResourceManager *resourceManager;
@property (nonatomic, readonly) shared_ptr_dd2d1f5e stylesheetVendor;
@property (nonatomic, readonly) struct Device *device;
@property (nonatomic, readonly) struct Device *gglDevice;
@property (nonatomic, readonly) struct AlphaAtlas *alphaAtlas;
@property (nonatomic, readonly) struct IsoAlphaAtlas *highInflationAlphaAtlas;
@property (nonatomic, readonly) struct IsoAlphaAtlas *isoAlphaAtlas;
@property (nonatomic, readonly) struct DistanceAtlas *distanceAtlas;
@property (nonatomic, readonly) const struct StandardLibrary *shaderLibrary;
@property (nonatomic, readonly) struct IconManager *grlIconManager;
@property (nonatomic, readonly) shared_ptr_76a6df1b grlFontManager;
@property (nonatomic, readonly) struct FigPhotoDecompressionSession *defaultDecompressionSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)purge;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)purgeDecompressSessionCachedBuffers;
- (const shared_ptr_887a193f *)dataOverrideManager;
- (id)_initWithDevice:(struct Device *)arg1 standardLibrary:(const shared_ptr_1ddd16cb *)arg2;
- (void)_addResourceUser;
- (void)_removeResourceUser;
- (_Bool)_hasResourceUsers;

@end
