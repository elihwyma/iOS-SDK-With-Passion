/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingSetBool.h>

@interface SASettingSetGuidedAccess : SASettingSetBool

+ (id)setGuidedAccess;
+ (id)setGuidedAccessWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
