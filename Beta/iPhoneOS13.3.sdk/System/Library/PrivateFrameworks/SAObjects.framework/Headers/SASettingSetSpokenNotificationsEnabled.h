/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingSetBool.h>

@class NSDate, NSString;

@interface SASettingSetSpokenNotificationsEnabled : SASettingSetBool

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSDate *timeToReEnable;

+ (id)setSpokenNotificationsEnabled;
+ (id)setSpokenNotificationsEnabledWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
