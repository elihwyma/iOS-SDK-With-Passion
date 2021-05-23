/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingCommand.h>

@class NSNumber, NSString;

@interface SASettingShowPassword : SASettingCommand

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *appOrWebsiteName;
@property (copy, nonatomic) NSNumber *shouldPromptForAuthentication;
@property (copy, nonatomic) NSString *spokenAppOrWebsiteName;

+ (id)showPassword;
+ (id)showPasswordWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
