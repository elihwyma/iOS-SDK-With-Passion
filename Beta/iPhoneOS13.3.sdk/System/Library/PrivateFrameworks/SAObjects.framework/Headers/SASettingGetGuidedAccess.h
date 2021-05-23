/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingGetBool.h>

@interface SASettingGetGuidedAccess : SASettingGetBool

+ (id)getGuidedAccess;
+ (id)getGuidedAccessWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
