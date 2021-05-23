/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPreheatItem.h>

@class NSObject, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PLFigPreheatItem : PLPreheatItem

{
    NSObject<OS_dispatch_queue> *_queue;
    struct NSObject *_cachedImage;
    _Bool _cachedImageCancelled;
    unsigned long long _requestID;
    struct FigPhotoDecompressionContainer *_container;
    NSObject<OS_dispatch_group> *_requestGroup;
    NSObject<OS_dispatch_group> *_waitGroup;
    _Bool _dataIsLoading;
    unsigned int _loadingOptions;
    _Atomic _Bool _cancelled;
    _Atomic _Bool _hasCachedImage;
    NSString *_imagePath;
}

@property (setter=_setHasCachedImage:) _Bool _hasCachedImage;
@property (nonatomic, readonly) unsigned int options;
@property (copy, nonatomic, readonly) NSString *imagePath;

- (void)dealloc;
- (_Bool)isCancelled;
- (void)_cancel;
- (id)decodeSessionOptions;
- (id)initWithImagePath:(id)arg1 format:(unsigned short)arg2 imageType:(long long)arg3 optimalSourcePixelSize:(struct CGSize)arg4 options:(unsigned int)arg5;
- (void)_uncancel;
- (struct NSObject *)cachedImage:(_Bool *)arg1;
- (struct NSObject *)cachedImageIfAvailable:(_Bool *)arg1;
- (_Bool)addImageHandler:(CDUnknownBlockType)arg1;
- (id)initialDecodeSessionOptions;
- (void)_cacheImage;
- (void)_loadPreheatDataWithHandler:(CDUnknownBlockType)arg1;
- (id)preheatData;
- (void)_leaveWaitGroupIfNeeded;
- (void)startPreheatRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelPreheatRequestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
