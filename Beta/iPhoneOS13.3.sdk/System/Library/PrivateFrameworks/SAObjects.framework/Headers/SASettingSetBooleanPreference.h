/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingSetBool.h>

@class NSString;

@interface SASettingSetBooleanPreference : SASettingSetBool

@property (copy, nonatomic) NSString *settingKey;

+ (id)setBooleanPreference;
+ (id)setBooleanPreferenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
