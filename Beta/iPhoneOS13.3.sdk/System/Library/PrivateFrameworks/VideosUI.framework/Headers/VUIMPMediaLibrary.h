/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaLibrary.h>

@class MPMediaLibrary, NSObject, NSOperationQueue;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIMPMediaLibrary : VUIMediaLibrary

{
    unsigned long long _connectionState;
    MPMediaLibrary *_mediaLibrary;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    NSOperationQueue *_serialOperationQueue;
}

@property (nonatomic) unsigned long long connectionState;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;

+ (void)initialize;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (unsigned long long)_connectionStateFromMPMediaLibraryStatus:(long long)arg1;

- (void)dealloc;
- (id)title;
- (_Bool)hasImageCache;
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_imageLoaderIdentifier;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;
- (id)initWithMPMediaLibrary:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;
- (void)_handleMediaLibraryStatusDidChangeNotification:(id)arg1;
- (void)_enqueueProcessingBlock:(CDUnknownBlockType)arg1;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;

@end
