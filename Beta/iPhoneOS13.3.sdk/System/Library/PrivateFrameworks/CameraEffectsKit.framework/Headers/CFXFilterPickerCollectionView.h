/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTCollectionView.h>

@interface CFXFilterPickerCollectionView : JTCollectionView

{
    _Bool _enableInfiniteHorizontalScrolling;
}

@property (nonatomic) _Bool enableInfiniteHorizontalScrolling;

- (void)layoutSubviews;

@end
