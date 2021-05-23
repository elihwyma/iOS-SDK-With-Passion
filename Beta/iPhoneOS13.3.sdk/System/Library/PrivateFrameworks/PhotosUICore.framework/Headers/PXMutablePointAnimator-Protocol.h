/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@class PXNumberAnimator;

@protocol PXMutableNumberAnimator;

@protocol PXMutablePointAnimator

@property (nonatomic) struct CGPoint value;
@property (nonatomic, readonly) PXNumberAnimator<PXMutableNumberAnimator> *xAnimator;
@property (nonatomic, readonly) PXNumberAnimator<PXMutableNumberAnimator> *yAnimator;

@end
