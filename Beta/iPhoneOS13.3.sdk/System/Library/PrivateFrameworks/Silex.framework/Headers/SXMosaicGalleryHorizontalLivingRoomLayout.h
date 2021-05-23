/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXMosaicGalleryGroupLayout.h>

@interface SXMosaicGalleryHorizontalLivingRoomLayout : SXMosaicGalleryGroupLayout

{
    _Bool _reverseLayout;
}

@property (nonatomic) _Bool reverseLayout;

- (double)desiredHeightForLargeItem;
- (double)desiredHeightForSmallerItems;
- (struct _NSRange)columnRangeForItem:(id)arg1;
- (struct _NSRange)columnRangeForLargeItem;
- (struct _NSRange)columnRangeForSmallerItems;
- (unsigned long long)indexOfLargeItem;
- (double)calculateHeight;
- (id)calculateFrames;

@end
