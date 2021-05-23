/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface VUIImageLoader : NSObject

{
    NSMutableDictionary *_imageLoadContextsByImageIdentifier;
    NSOperationQueue *_imageLoadOperationQueue;
}

@property (retain, nonatomic) NSMutableDictionary *imageLoadContextsByImageIdentifier;
@property (retain, nonatomic) NSOperationQueue *imageLoadOperationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_scaledImageIdentifierWithImageIdentifier:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;

- (id)init;
- (void)dealloc;
- (id)imageKeyForObject:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)cancelLoad:(id)arg1;
- (void)_cancelAllImageLoads;
- (id)_imageLoaderIdentifier;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;
- (id)_imageIdentifierWithImageLoadParams:(id)arg1;

@end
