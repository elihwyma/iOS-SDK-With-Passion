/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <PrototypeTools/PTSettings.h>

@class SFMagicHeadSettings;

@interface SFSettings : PTSettings

{
    SFMagicHeadSettings *_magicHeadSettings;
}

@property (retain, nonatomic) SFMagicHeadSettings *magicHeadSettings;

+ (id)settingsControllerModule;

@end
