/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMSettingGroup;

@protocol HMSettingsDelegate, HMSettingsOwner;

@interface HMSettings : NSObject

{
    id <HMSettingsOwner> _owner;
}

@property (weak, readonly) id <HMSettingsOwner> owner;
@property (readonly) HMSettingGroup *rootGroup;
@property (readonly, getter=isControllable) _Bool controllable;
@property (weak) id <HMSettingsDelegate> delegate;

- (id)initWithSettingsOwner:(id)arg1;

@end
