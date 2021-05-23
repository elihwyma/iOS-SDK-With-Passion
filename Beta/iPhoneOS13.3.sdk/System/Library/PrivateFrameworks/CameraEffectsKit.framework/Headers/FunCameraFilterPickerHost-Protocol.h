/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/Swift-Protocol.h>

@protocol FunCamFilterPickerPresentationDelegate;

@protocol FunCameraFilterPickerHost <Swift>

@property (weak, nonatomic) id <FunCamFilterPickerPresentationDelegate> filterPickerPresentationDelegate;
@property (nonatomic, readonly) unsigned long long layoutPresentationStyle;

@end
