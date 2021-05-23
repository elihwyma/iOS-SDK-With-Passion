/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <PrototypeTools/PTSettings.h>

@interface CSLockScreenPasscodeSettings : PTSettings

{
    double _lightenSourceOverColorWhite;
    double _lightenSourceOverColorAlpha;
    double _plusDColorWhite;
    double _plusDColorAlpha;
}

@property (nonatomic) double lightenSourceOverColorWhite;
@property (nonatomic) double lightenSourceOverColorAlpha;
@property (nonatomic) double plusDColorWhite;
@property (nonatomic) double plusDColorAlpha;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
