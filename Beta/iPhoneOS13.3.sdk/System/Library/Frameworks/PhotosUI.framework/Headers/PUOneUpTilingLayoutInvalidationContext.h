/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTilingLayoutInvalidationContext.h>

@interface PUOneUpTilingLayoutInvalidationContext : PUTilingLayoutInvalidationContext

{
    _Bool _invalidatedContentInsets;
    _Bool _invalidatedCommentsTile;
    _Bool _invalidatedAccessoryTile;
    _Bool _invalidatedContentOffset;
    _Bool _invalidatedVideoPlaceholderTile;
    unsigned long long _options;
}

@property (nonatomic, setter=_setInvalidatedContentInsets:) _Bool invalidatedContentInsets;
@property (nonatomic, setter=_setInvalidatedAccessoryTile:) _Bool invalidatedAccessoryTile;
@property (nonatomic, setter=_setInvalidatedContentOffset:) _Bool invalidatedContentOffset;
@property (nonatomic, setter=_setInvalidatedVideoPlaceholderTile:) _Bool invalidatedVideoPlaceholderTile;
@property (nonatomic, setter=_setOptions:) unsigned long long options;
@property (nonatomic, readonly) _Bool invalidatedCommentsTile;

@end
