/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOTileLoaderDeprecatedCtx : NSObject

{
    struct __CFRunLoop *_runloop;
    GEOTileKeyList *_originalList;
    GEOTileKeyList *_submittedList;
    GEOTileKeyList *_satisfiedList;
    GEOTileKeyList *_notLoaded;
    CDUnknownBlockType _callback;
    CDUnknownBlockType _progress;
    CDUnknownBlockType _error;
    CDUnknownBlockType _finished;
}

@property (copy, nonatomic) CDUnknownBlockType progress;
@property (copy, nonatomic) CDUnknownBlockType error;
@property (copy, nonatomic) CDUnknownBlockType finished;
@property (copy, nonatomic) CDUnknownBlockType callback;

- (void)dealloc;
- (void)cancel;
- (id)initWithList:(id)arg1;
- (void)success:(const struct _GEOTileKey *)arg1 tile:(id)arg2 info:(id)arg3;
- (void)failure:(const struct _GEOTileKey *)arg1 error:(id)arg2 info:(id)arg3;
- (void)breakCycle;

@end
