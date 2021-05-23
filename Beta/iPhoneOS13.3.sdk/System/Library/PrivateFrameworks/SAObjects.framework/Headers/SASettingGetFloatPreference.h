/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingGetFloat.h>

@class NSString;

@interface SASettingGetFloatPreference : SASettingGetFloat

@property (copy, nonatomic) NSString *settingKey;

+ (id)getFloatPreference;
+ (id)getFloatPreferenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
