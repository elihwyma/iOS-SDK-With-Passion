/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISettings.h>

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizerDwellSettings : _UISettings

{
    double _longPressTipPermittedHorizontalMovement;
    double _longPressTipPermittedVerticalMovement;
    double _longPressPermittedHorizontalMovement;
    double _longPressPermittedVerticalMovement;
    double _longPressRequiredDuration;
}

@property (nonatomic) double longPressTipPermittedHorizontalMovement;
@property (nonatomic) double longPressTipPermittedVerticalMovement;
@property (nonatomic) double longPressPermittedHorizontalMovement;
@property (nonatomic) double longPressPermittedVerticalMovement;
@property (nonatomic) double longPressRequiredDuration;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
