/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class TVImageDecorator, _TVDecoratorRequest;

@protocol IKNetworkRequestLoader;

@interface TVImageProxy : NSObject

{
    _Bool _cacheOnLoad;
    _Bool _allowsSubstitutionForOriginal;
    _Bool _imageAvailable;
    _Bool _isLoading;
    _Bool _loadSynchronouslyIfCached;
    _Bool _writeToAssetLibrary;
    id _object;
    id _imageLoader;
    TVImageDecorator *_decorator;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _writeCompletionHandler;
    long long _imageDirection;
    long long _groupType;
    id _requestToken;
    _TVDecoratorRequest *_decoratorRequestToken;
    id _imageDidWriteObserver;
    id <IKNetworkRequestLoader> _requestLoader;
}

@property (retain, nonatomic) id imageLoader;
@property (nonatomic) long long groupType;
@property (retain, nonatomic) id requestToken;
@property (retain, nonatomic) _TVDecoratorRequest *decoratorRequestToken;
@property (nonatomic) _Bool isLoading;
@property (retain, nonatomic) id imageDidWriteObserver;
@property (weak, nonatomic) id <IKNetworkRequestLoader> requestLoader;
@property (nonatomic) _Bool loadSynchronouslyIfCached;
@property (nonatomic) _Bool writeToAssetLibrary;
@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) struct CGSize expectedSize;
@property (nonatomic) _Bool cacheOnLoad;
@property (nonatomic) _Bool allowsSubstitutionForOriginal;
@property (retain, nonatomic) TVImageDecorator *decorator;
@property (copy) CDUnknownBlockType completionHandler;
@property (copy) CDUnknownBlockType writeCompletionHandler;
@property (nonatomic, getter=isImageAvailable) _Bool imageAvailable;
@property (nonatomic) long long imageDirection;

+ (id)_imageDecoratorQueue;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)load;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (id)initWithObject:(id)arg1 imageLoader:(id)arg2 groupType:(long long)arg3;
- (id)_decoratedImageAssetPath;
- (id)_imageLoaderKey;
- (id)_originalImageAssetPath;
- (void)_callCompletionHandlerWithImage:(id)arg1 error:(id)arg2 finished:(_Bool)arg3;
- (void)_callWriteCompletionHandlerWithPath:(id)arg1 error:(id)arg2 finished:(_Bool)arg3;
- (void)_completeImageLoadWithImage:(id)arg1 imagePath:(id)arg2 error:(id)arg3 assetKey:(id)arg4 expiryDate:(id)arg5 tags:(id)arg6 requestRecord:(id)arg7;
- (id)_originalImageAssetKey;
- (id)_decoratedImageAssetKey;
- (void)_decorateAndWriteImage:(id)arg1 imagePath:(id)arg2 scaleToSize:(struct CGSize)arg3 cropToFit:(_Bool)arg4 scalingResult:(unsigned long long)arg5 assetKey:(id)arg6 expiryDate:(id)arg7 tags:(id)arg8 requestRecord:(id)arg9;
- (void)_imageDidWriteHandler:(id)arg1;
- (id)_assetKeyWithImageLoaderKey:(id)arg1 decoratorIdentifier:(id)arg2;
- (id)_imageAssetPathWithAssetKey:(id)arg1;
- (id)_decoratorIdentifier;
- (_Bool)isOfSameOriginAs:(id)arg1;
- (void)loadWithWeakObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
