/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, SKUISettingsGroupDescription;

@protocol SKUISettingsGroupControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUISettingsGroupController : NSObject

{
    id <SKUISettingsGroupControllerDelegate> _delegate;
    NSMutableArray *_settingDescriptions;
    SKUISettingsGroupDescription *_settingsGroupDescription;
}

@property (weak, nonatomic) id <SKUISettingsGroupControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *settingDescriptions;
@property (retain, nonatomic) SKUISettingsGroupDescription *settingsGroupDescription;

- (void)attachSettingDescription:(id)arg1;
- (id)_viewForSettingDescription:(id)arg1;
- (void)_reloadSettingDescription:(id)arg1;

@end
