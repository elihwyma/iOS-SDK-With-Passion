/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSExtensionContext.h>

@class NSOperationQueue, NSString;

@protocol QLThumbnailSurfaceGeneratorProtocol;

@interface QLThumbnailHostContext : NSExtensionContext

{
    NSOperationQueue *_thumbnailGenerationConcurrenQueue;
    id <QLThumbnailSurfaceGeneratorProtocol> _ioSurfaceGenerator;
}

@property (retain, nonatomic) NSOperationQueue *thumbnailGenerationConcurrenQueue;
@property (weak, nonatomic) id <QLThumbnailSurfaceGeneratorProtocol> ioSurfaceGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)protocolServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)ioSurfaceWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateThumbnailOfSize:(struct CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withItem:(id)arg5 ioSurfaceGenerator:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;

@end
