/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSString, QLExtensionThumbnailGenerator, QLItemDataThumbnailGenerator, QLItemURLThumbnailGenerator;

@interface QLItemThumbnailGenerator : NSObject

{
    QLExtensionThumbnailGenerator *_extensionGenerator;
    QLItemURLThumbnailGenerator *_urlGenerator;
    QLItemDataThumbnailGenerator *_dataGenerator;
}

@property (retain, nonatomic) QLExtensionThumbnailGenerator *extensionGenerator;
@property (retain, nonatomic) QLItemURLThumbnailGenerator *urlGenerator;
@property (retain, nonatomic) QLItemDataThumbnailGenerator *dataGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)generateThumbnailForItem:(id)arg1 ofSize:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)generateThumbnailForItem:(id)arg1 ofSize:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)_fetcherClassesForPreviewItem:(id)arg1;

@end
