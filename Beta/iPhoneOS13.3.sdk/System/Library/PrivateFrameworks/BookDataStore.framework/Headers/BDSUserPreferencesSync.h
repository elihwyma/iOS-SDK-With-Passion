/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@interface BDSUserPreferencesSync : NSObject

+ (id)syncedPreferenceKeys;
+ (void)copyChangedLocalPreferencesToGroupContainerWithAppSuiteName:(id)arg1 container:(id)arg2 groupName:(id)arg3 groupContainer:(id)arg4;
+ (id)objectFromGroupPreferencesForKey:(id)arg1;
+ (void)copyChangedGroupPreferencesToLocalContainer;
+ (void)copyChangedLocalPreferencesToGroupContainer;

@end
