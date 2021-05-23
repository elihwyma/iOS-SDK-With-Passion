/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <PlatterKit/Swift-Protocol.h>

@class PLPreviewInteractionManager, UIView;

@protocol PLPreviewInteractionPresenting <Swift>

@property (nonatomic, readonly) PLPreviewInteractionManager *previewInteractionManager;
@property (nonatomic, readonly) UIView *viewForPreview;
@property (nonatomic, readonly) struct CGRect initialPresentedFrameOfViewForPreview;
@property (nonatomic, readonly) struct CGRect finalPresentedFrameOfViewForPreview;
@property (nonatomic, readonly) struct CGRect finalDismissedFrameOfViewForPreview;

@end
