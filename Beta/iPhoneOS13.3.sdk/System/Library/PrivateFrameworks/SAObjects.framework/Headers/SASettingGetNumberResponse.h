/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingGetValueResponse.h>

@interface SASettingGetNumberResponse : SASettingGetValueResponse

+ (id)getNumberResponse;
+ (id)getNumberResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
