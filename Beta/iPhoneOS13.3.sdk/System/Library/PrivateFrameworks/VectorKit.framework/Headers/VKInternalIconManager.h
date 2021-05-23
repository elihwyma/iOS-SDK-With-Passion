/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKInternalIconManager : NSObject

{
    shared_ptr_6d521cf7 _iconManager;
    shared_ptr_dd2d1f5e _stylesheetVendor;
    struct read_write_lock _nameToStyleManagerLock;
    struct map<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID>>, NSStringMapComparison, geo::StdAllocator<std::__1::pair<const geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, mdm::Allocator>> _nameToStyleManager;
    struct _retain_ptr<VKResourceManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _resourceManager;
    struct shared_ptr<md::GeoResourceProvider> _resourceProvider;
    shared_ptr_76a6df1b _fontManager;
}

+ (long long)convertGrlSizeGroup:(unsigned char)arg1;
+ (unsigned char)convertSizeGroup:(long long)arg1;
+ (unsigned int)convertCalloutShape:(unsigned char)arg1;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)purge;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (_Bool)isCachingAtlases;
- (unsigned int)darkVariant;
- (id)imageForDataID:(unsigned int)arg1 text:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (unsigned int)styleAttributeTransitSystemTypeKey;
- (id)imageForKey:(unsigned int)arg1 value:(unsigned int)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (unsigned int)styleAttributeTransitTypeKey;
- (unsigned int)trafficIncidentTypeKey;
- (id)imageForName:(id)arg1 contentScale:(float)arg2 sizeGroup:(long long)arg3 modifiers:(id)arg4;
- (id)init:(shared_ptr_6d521cf7)arg1 stylesheetVendor:(shared_ptr_dd2d1f5e)arg2;
- (id)imageForStyleAttributes:(id)arg1 styleManager:(shared_ptr_a3c46825)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (void)setIsCachingAtlases:(_Bool)arg1;

@end
