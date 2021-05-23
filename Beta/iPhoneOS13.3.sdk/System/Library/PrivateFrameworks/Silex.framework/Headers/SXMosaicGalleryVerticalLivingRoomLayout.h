/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXMosaicGalleryGroupLayout.h>

@interface SXMosaicGalleryVerticalLivingRoomLayout : SXMosaicGalleryGroupLayout

{
    double _largeItemHeight;
    double _smallItemHeight;
}

@property (nonatomic, readonly) double largeItemHeight;
@property (nonatomic, readonly) double smallItemHeight;

- (struct _NSRange)columnRangeForItem:(id)arg1;
- (double)calculateHeight;
- (id)calculateFrames;
- (id)initWithCluster:(id)arg1 numberOfColumns:(unsigned long long)arg2 columnLayout:(id)arg3;

@end
