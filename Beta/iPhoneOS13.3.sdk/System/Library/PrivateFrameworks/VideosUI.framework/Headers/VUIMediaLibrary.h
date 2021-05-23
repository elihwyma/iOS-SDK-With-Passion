/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIImageLoader.h>

@class NSObject, NSString, VUIMediaLibraryManager;

@protocol VUIMediaLibraryIdentifier;

@interface VUIMediaLibrary : VUIImageLoader

{
    VUIMediaLibraryManager *_manager;
    NSObject<VUIMediaLibraryIdentifier> *_identifier;
    unsigned long long _type;
    unsigned long long _revision;
}

@property (copy, nonatomic) NSObject<VUIMediaLibraryIdentifier> *identifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long revision;
@property (weak, nonatomic, readonly) VUIMediaLibraryManager *manager;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly, getter=isConnectable) _Bool connectable;
@property (nonatomic, readonly) _Bool supportsDRMContent;
@property (nonatomic, readonly) unsigned long long connectionState;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;
- (void)_postContentsDidChangeNotification;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_imageLoaderIdentifier;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)_incrementRevision;
- (void)_updateWithTitle:(id)arg1 connectionState:(unsigned long long)arg2;

@end
