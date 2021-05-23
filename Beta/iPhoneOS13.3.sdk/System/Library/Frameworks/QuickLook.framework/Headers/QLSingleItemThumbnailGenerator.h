/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSString, QLItem, QLItemThumbnailGenerator, UIImage;

__attribute__((visibility("hidden")))
@interface QLSingleItemThumbnailGenerator : NSObject

{
    UIImage *_thumbnail;
    struct CGSize _thumbnailSize;
    _Bool _isRepresentative;
    QLItemThumbnailGenerator *_thumbnailGenerator;
    QLItem *_item;
}

@property (retain, nonatomic) QLItemThumbnailGenerator *thumbnailGenerator;
@property (weak, nonatomic) QLItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (void)generateThumbnailWithSize:(struct CGSize)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_provideThumbnailForUbiquitousURLWithSize:(struct CGSize)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_handleThumbnailGenerationFinishedWithThumbnail:(id)arg1 size:(struct CGSize)arg2 clientCompletionBlock:(CDUnknownBlockType)arg3;
- (id)genericIconWithSize:(struct CGSize)arg1;

@end
