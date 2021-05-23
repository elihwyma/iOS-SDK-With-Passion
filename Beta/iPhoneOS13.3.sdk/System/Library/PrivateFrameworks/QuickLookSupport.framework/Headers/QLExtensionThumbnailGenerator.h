/*
 Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

#import <Foundation/NSObject.h>

@class NSString, QLExtensionManager;

@interface QLExtensionThumbnailGenerator : NSObject

{
    QLExtensionManager *_extensionManager;
}

@property (retain, nonatomic) QLExtensionManager *extensionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)hasThirdPartyThumbnailGeneratorForItem:(id)arg1;
+ (_Bool)hasThirdPartyThumbnailGeneratorForContentType:(id)arg1;

- (id)init;
- (void)generateThumbnailForExtensionThumbnailItem:(id)arg1 ofSize:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)ioSurfaceWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generatePlatformImageThumbnailForExtensionThumbnailItem:(id)arg1 ofSize:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)_generateImageFromRawData:(id)arg1 withContextSize:(struct CGSize)arg2 scale:(double)arg3;
- (id)_generateImageFromURL:(id)arg1 withSize:(struct CGSize)arg2 scale:(double)arg3;

@end
