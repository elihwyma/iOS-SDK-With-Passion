/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIView.h>

@class UIButton, UIImagePickerController, UILabel, WFCameraFlashButton, WFCameraShutterButton, WFVolumeButtonManager;

__attribute__((visibility("hidden")))
@interface WFCameraOverlayView : UIView

{
    UIImagePickerController *_pickerController;
    WFCameraShutterButton *_shutterButton;
    long long _takenPhotos;
    long long _totalPhotos;
    WFCameraFlashButton *_flashButton;
    UIView *_flashView;
    UIButton *_flipButton;
    UILabel *_photosLabel;
    WFVolumeButtonManager *_volumeButtonManager;
}

@property (weak, nonatomic) WFCameraFlashButton *flashButton;
@property (weak, nonatomic) UIView *flashView;
@property (weak, nonatomic) UIButton *flipButton;
@property (weak, nonatomic) UILabel *photosLabel;
@property (retain, nonatomic) WFVolumeButtonManager *volumeButtonManager;
@property (weak, nonatomic) UIImagePickerController *pickerController;
@property (weak, nonatomic) WFCameraShutterButton *shutterButton;
@property (nonatomic) long long takenPhotos;
@property (nonatomic) long long totalPhotos;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)cancelPressed;
- (void)shutterPressed;
- (void)updatePhotosLabel;
- (void)flipPressed;
- (void)flashValueChanged;
- (void)updateFlipButton;
- (void)updateButtons;

@end
