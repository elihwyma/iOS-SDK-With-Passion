/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICMigrationDeviceInfo.h>

@class NSString;

@interface ICFullDeviceInfo : ICMigrationDeviceInfo

{
    NSString *_model;
    NSString *_modelDisplayName;
    NSString *_softwareVersion;
    struct ICDeviceHardwareInfo _hardwareInfo;
}

@property (nonatomic, readonly) struct ICDeviceHardwareInfo hardwareInfo;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *modelDisplayName;
@property (nonatomic, readonly) NSString *softwareVersion;

- (id)init;
- (id)description;
- (id)loggableDescription;
- (_Bool)upgradableToIOS13;
- (_Bool)upgradedToIOS13;
- (_Bool)isIOSDevice;
- (_Bool)upgraded;
- (_Bool)upgradable;
- (_Bool)isOSXDevice;
- (id)initWithName:(id)arg1 model:(id)arg2 modelDisplayName:(id)arg3 softwareVersion:(id)arg4;
- (_Bool)shouldBeHidden;
- (struct ICDeviceHardwareInfo)hardwareInfoFromModelId:(id)arg1;
- (_Bool)isHardwareInfoUpgradable:(struct ICDeviceHardwareInfo)arg1;
- (_Bool)isHardwareInfoUpgradableToIOS13:(struct ICDeviceHardwareInfo)arg1;
- (_Bool)upgradedToMajor:(int)arg1 minor:(int)arg2;
- (unsigned long long)hardwareInfoNameFromString:(id)arg1;

@end
