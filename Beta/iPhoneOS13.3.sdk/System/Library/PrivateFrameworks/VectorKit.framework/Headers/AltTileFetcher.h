/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class GEOApplicationAuditToken, GEOTileLoader, GEOVectorTileDecoder, NSString;

__attribute__((visibility("hidden")))
@interface AltTileFetcher : NSObject

{
    GEOTileLoader *_geoTileLoader;
    struct _retain_ptr<GEOVectorTileDecoder *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        GEOVectorTileDecoder *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _vectorTileDecoder;
    struct _retain_ptr<GEOApplicationAuditToken *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        GEOApplicationAuditToken *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _auditToken;
    struct unordered_map<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyHashFunc, GEOTileKeyEqualsFunc, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob>>>> _keyToJobMap;
    struct Mutex _mutex;
    unsigned int _numDownloads;
    NSString *_tileLoaderClientIdentifier;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithToken:(id)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)cancelJob:(shared_ptr_97fa0047 *)arg1;
- (shared_ptr_97fa0047)getJobForKey:(const struct _GEOTileKey *)arg1;
- (void)fetchDataForJob:(shared_ptr_97fa0047 *)arg1;
- (void)updateJobPriority:(shared_ptr_97fa0047 *)arg1;
- (void)cancelRequests;
- (void)purgeExpired:(double)arg1;

@end
