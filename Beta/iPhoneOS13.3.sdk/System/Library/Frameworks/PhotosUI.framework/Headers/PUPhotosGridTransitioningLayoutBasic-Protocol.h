/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@class UICollectionViewLayout;

@protocol PUPhotosGridTransitioningLayoutBasic <Swift>

@property (nonatomic, readonly) UICollectionViewLayout *transitionLayout;
@property (nonatomic) struct CGPoint transitionStartContentOffset;
@property (nonatomic, readonly) struct CGPoint transitionEndContentOffset;
@property (nonatomic) _Bool transitionZoomingOut;
@property (nonatomic, readonly) _Bool transitionIsAppearing;

@end
