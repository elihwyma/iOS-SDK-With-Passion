/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMPanoramaUtilities : NSObject

+ (struct CGSize)bufferSize;
+ (struct CGSize)panoramaViewSizeForCaptureSize:(struct CGSize)arg1 availableWidth:(double)arg2 layoutStyle:(long long)arg3;
+ (struct CGSize)defaultPreviewSize;
+ (struct UIEdgeInsets)panoramaViewLayoutInsetsForLayoutStyle:(long long)arg1;
+ (struct CGSize)previewStripSizeForCaptureSize:(struct CGSize)arg1 availableWidth:(double)arg2 layoutStyle:(long long)arg3;
+ (struct UIEdgeInsets)panoramaViewPreviewStripInsetsForLayoutStyle:(long long)arg1;
+ (double)singlePreviewFrameWidthForPreviewHeight:(double)arg1;

@end
