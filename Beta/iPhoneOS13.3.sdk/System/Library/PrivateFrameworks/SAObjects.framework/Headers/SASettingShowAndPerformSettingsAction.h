/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@protocol SASettingSettingsAction;

@interface SASettingShowAndPerformSettingsAction : SABaseClientBoundCommand

@property (retain, nonatomic) id <SASettingSettingsAction> settingsAction;

+ (id)showAndPerformSettingsAction;
+ (id)showAndPerformSettingsActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
