/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString;

@interface _TVAppIconImageLoader : NSObject

{
    NSOperationQueue *_imageLoaderQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)URLForObject:(id)arg1;
- (id)imageKeyForObject:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)cancelLoad:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_createApplicationIconForIdentifier:(id)arg1;

@end
