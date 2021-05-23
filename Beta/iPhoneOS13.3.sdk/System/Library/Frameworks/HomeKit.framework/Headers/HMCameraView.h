/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <UIKit/UIView.h>

@class HMCameraSource;

@interface HMCameraView : UIView

{
    HMCameraSource *_cameraSource;
}

@property (retain, nonatomic) HMCameraSource *cameraSource;

@end
