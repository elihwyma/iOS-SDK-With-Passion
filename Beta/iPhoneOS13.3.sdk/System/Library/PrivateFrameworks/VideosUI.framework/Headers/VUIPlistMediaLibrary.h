/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIDeviceMediaLibrary.h>

@class NSObject, NSOperationQueue, VUIPlistMediaDatabase;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaLibrary : VUIDeviceMediaLibrary

{
    VUIPlistMediaDatabase *_database;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    NSOperationQueue *_serialOperationQueue;
}

@property (retain, nonatomic) VUIPlistMediaDatabase *database;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;

- (void)dealloc;
- (id)title;
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1 manager:(id)arg2;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_imageLoaderIdentifier;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;
- (void)_enqueueProcessingBlock:(CDUnknownBlockType)arg1;
- (void)_handleMediaDatabaseContentsDidChangeNotification:(id)arg1;

@end
