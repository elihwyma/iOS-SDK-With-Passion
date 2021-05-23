/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingGetValueResponse.h>

@interface SASettingGetBoolResponse : SASettingGetValueResponse

+ (id)getBoolResponse;
+ (id)getBoolResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
