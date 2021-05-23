/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingGetBool.h>

@class NSString;

@interface SASettingGetSpokenNotificationsEnabled : SASettingGetBool

@property (copy, nonatomic) NSString *appBundleId;

+ (id)getSpokenNotificationsEnabled;
+ (id)getSpokenNotificationsEnabledWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
