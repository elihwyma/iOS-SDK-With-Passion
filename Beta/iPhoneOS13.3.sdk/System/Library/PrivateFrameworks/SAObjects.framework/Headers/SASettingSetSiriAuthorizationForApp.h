/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingSetBool.h>

@class NSString;

@interface SASettingSetSiriAuthorizationForApp : SASettingSetBool

@property (copy, nonatomic) NSString *bundleId;

+ (id)setSiriAuthorizationForApp;
+ (id)setSiriAuthorizationForAppWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
