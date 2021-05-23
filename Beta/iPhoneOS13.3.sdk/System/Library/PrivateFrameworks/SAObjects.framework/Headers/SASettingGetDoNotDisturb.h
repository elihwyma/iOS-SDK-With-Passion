/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingGetBool.h>

@interface SASettingGetDoNotDisturb : SASettingGetBool

+ (id)getDoNotDisturb;
+ (id)getDoNotDisturbWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
