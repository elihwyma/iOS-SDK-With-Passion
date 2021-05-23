/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUArtworkCellContext.h>

@interface SUItemCellContext : SUArtworkCellContext

{
    struct __CFDictionary *_cachedRatingImages;
    CDStruct_f2932e27 _stringSizeCacheKeyCallBacks;
    struct __CFDictionary *_stringSizes;
}

@property (nonatomic) CDStruct_f2932e27 stringSizeCacheKeyCallBacks;

- (id)init;
- (void)dealloc;
- (void)resetLayoutCaches;
- (id)ratingImageForRating:(float)arg1 style:(long long)arg2;
- (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 constrainedToSize:(struct CGSize)arg3;

@end
