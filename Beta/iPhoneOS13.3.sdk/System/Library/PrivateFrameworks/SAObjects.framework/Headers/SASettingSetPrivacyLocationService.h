/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingSetBool.h>

@interface SASettingSetPrivacyLocationService : SASettingSetBool

@property (nonatomic) _Bool userConfirmed;

+ (id)setPrivacyLocationService;
+ (id)setPrivacyLocationServiceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
