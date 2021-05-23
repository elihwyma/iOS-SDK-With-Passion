/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSExtensionContext.h>

@class NSString, QLThumbnailProvider;

__attribute__((visibility("hidden")))
@interface QLThumbnailServiceContext : NSExtensionContext

{
    QLThumbnailProvider *_thumbnailProvider;
}

@property (retain, nonatomic) QLThumbnailProvider *thumbnailProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)protocolHost;
- (void)ioSurfaceForRequest:(id)arg1 withSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateThumbnailOfSize:(struct CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withContents:(id)arg5 additionalResourcesWrapper:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)_thumbnailGenerationQueue;
- (id)protocolHostWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)generateThumbnailOfSize:(struct CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withFileURLHandler:(id)arg5 additionalResourcesWrapper:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;

@end
