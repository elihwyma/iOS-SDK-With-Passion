/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface _HKDaemonPreferences : NSObject

+ (_Bool)setValue:(id)arg1 forKey:(id)arg2;
+ (id)valueForKey:(id)arg1;
+ (_Bool)_boolValueForKey:(id)arg1;
+ (_Bool)usingDemoDataDatabase;
+ (_Bool)isGenerateDemoDataSet;
+ (_Bool)isStoreDemoModeSet;
+ (_Bool)_setPreferenceValue:(void *)arg1 forKey:(id)arg2;
+ (id)_safePreferenceForKey:(id)arg1 expectedReturnClass:(Class)arg2;
+ (_Bool)shouldGenerateDemoData;
+ (void)synchronizePreferencesWithWatch:(id)arg1;

@end
