/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/Swift-Protocol.h>

@protocol CAMCaptureAdjustmentProvider <Swift>

- (unsigned short)hasAdjustments;
- (unsigned short)aspectRatioCrop;
- (unsigned short)effectFilterType;
- (unsigned short)lightingEffectType;

@end
