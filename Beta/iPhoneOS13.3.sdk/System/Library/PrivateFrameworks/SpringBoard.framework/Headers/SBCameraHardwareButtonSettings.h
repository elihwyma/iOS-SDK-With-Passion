/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@interface SBCameraHardwareButtonSettings : PTSettings

{
    _Bool _shutterButtonShouldUsePocketDetection;
    double _shutterButtonLongPressTimeout;
    double _shutterButtonLongPressCancellationTimeout;
}

@property (nonatomic) double shutterButtonLongPressTimeout;
@property (nonatomic) double shutterButtonLongPressCancellationTimeout;
@property (nonatomic) _Bool shutterButtonShouldUsePocketDetection;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
