/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface CAMUserPreferenceOverrides : NSObject

{
    NSNumber *_captureMode;
    NSNumber *_captureDevice;
    NSNumber *_videoConfiguration;
    NSNumber *_wantsQRCodes;
    NSNumber *_flashMode;
    NSNumber *_torchMode;
    NSNumber *_aspectRatioCrop;
}

@property (retain, nonatomic) NSNumber *captureMode;
@property (retain, nonatomic) NSNumber *captureDevice;
@property (retain, nonatomic) NSNumber *videoConfiguration;
@property (retain, nonatomic) NSNumber *wantsQRCodes;
@property (retain, nonatomic) NSNumber *flashMode;
@property (retain, nonatomic) NSNumber *torchMode;
@property (retain, nonatomic) NSNumber *aspectRatioCrop;
@property (nonatomic, readonly) _Bool hasOverrides;

- (id)initWithLaunchOptions:(id)arg1;
- (id)initWithOverrides:(id)arg1;
- (id)initWithShortcutItem:(id)arg1;
- (id)initWithConfigurationURL:(id)arg1;

@end
