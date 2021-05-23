/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTilingLayoutInvalidationContext.h>

__attribute__((visibility("hidden")))
@interface PUScrubberTilingLayoutInvalidationContext : PUTilingLayoutInvalidationContext

{
    _Bool _invalidatedExpandedItem;
}

@property (nonatomic, readonly) _Bool invalidatedExpandedItem;

- (void)invalidateExpandedItem;

@end
