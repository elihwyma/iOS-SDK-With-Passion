/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingOpenSettings.h>

@class NSString;

@interface SASettingOpenPreference : SASettingOpenSettings

@property (copy, nonatomic) NSString *pane;
@property (copy, nonatomic) NSString *tag;

+ (id)openPreference;
+ (id)openPreferenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
