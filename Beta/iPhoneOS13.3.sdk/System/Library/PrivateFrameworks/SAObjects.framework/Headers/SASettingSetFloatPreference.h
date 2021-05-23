/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingSetFloat.h>

@class NSString;

@interface SASettingSetFloatPreference : SASettingSetFloat

@property (copy, nonatomic) NSString *settingKey;

+ (id)setFloatPreference;
+ (id)setFloatPreferenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
