/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSString, NSUserDefaults;

@interface _UIActivityUserDefaults : NSObject

{
    NSString *_activityDefaultsKey;
    NSUserDefaults *_underlyingUserDefaults;
}

@property (copy, nonatomic) NSString *activityDefaultsKey;
@property (retain, nonatomic) NSUserDefaults *underlyingUserDefaults;

+ (id)builtinActivityOrder;
+ (id)updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)arg1 someSortedActivityIdentifiers:(id)arg2;
+ (void)migrateUserDefaultKeyIfNecessary:(id)arg1 hasMigratedKey:(id)arg2 fromUserDefaults:(id)arg3 toUserDefaults:(id)arg4;
+ (void)migrateUserDefaultKeysIfNecessary:(id)arg1 fromUIKitDefaultsToUserDefaults:(id)arg2;

- (id)activitiesOrderedByUserActivityOrderForActivities:(id)arg1;
- (_Bool)activityIsHidden:(id)arg1;
- (void)setActivity:(id)arg1 asHidden:(_Bool)arg2;
- (id)applicationExtensionForActivity:(id)arg1;
- (void)postActivityUserDefaultsDidChangeNotification;
- (id)identifierForActivity:(id)arg1;
- (id)activityIdentifiersInUserOrder;
- (id)activitiesBySortingActivities:(id)arg1 byIdentifierWithDefaultActivityIdentifierOrdering:(id)arg2;
- (id)mutableActivityIdentifiersArrayForActivitiesArray:(id)arg1;
- (void)setActivityIdentifiersInUserOrder:(id)arg1;
- (id)_userDefaultsDictionary;
- (void)_setUserDefaultsDictionary:(id)arg1;
- (id)initWithUnderlyingUserDefaults:(id)arg1 activityDefaultsKey:(id)arg2;
- (_Bool)canHideActivity:(id)arg1;
- (id)migrateSortOrderIfNeededForBuiltInActivityType:(id)arg1 activityIdentifierOrdering:(id)arg2;
- (void)updateUserActivityOrderWithOrderedPartialActivities:(id)arg1;
- (void)removeActivityTypeFromDefaults:(id)arg1;
- (void)replaceUserActivityOrderIfNecessaryWithSystemDefaultOrder:(id)arg1;
- (id)defaultsValueForKey:(id)arg1 activity:(id)arg2;
- (void)setDefaultsValue:(id)arg1 forKey:(id)arg2 activity:(id)arg3;

@end
