/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCNotificationSettingsPayload : MCPayload

{
    NSArray *_notificationSettings;
}

@property (retain, nonatomic) NSArray *notificationSettings;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)validatedNotificationSettings:(id)arg1 outError:(id *)arg2;

@end
