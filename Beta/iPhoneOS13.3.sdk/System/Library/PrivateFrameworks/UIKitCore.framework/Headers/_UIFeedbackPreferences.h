/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface _UIFeedbackPreferences : NSObject

{
    NSMutableDictionary *_enabledFeedbackTypes;
    NSDictionary *_defaultFeedbackTypes;
    NSUserDefaults *_userDefaults;
}

@property (nonatomic, readonly) NSDictionary *defaultFeedbackTypes;
@property (retain, nonatomic) NSUserDefaults *userDefaults;

+ (id)sharedPreferences;

- (id)init;
- (void)_invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned long long)enabledFeedbackTypesForCategory:(id)arg1;
- (void)_startObservingDefaults;
- (id)_categoryForNullableCategory:(id)arg1;
- (id)_categoryKeyForCategory:(id)arg1 type:(unsigned long long)arg2;
- (id)_defaultKeyForCategoryKey:(id)arg1 type:(unsigned long long)arg2;
- (void)_accessibilityForceTouchChanged:(id)arg1;
- (unsigned long long)_enabledFeedbackTypesForCategory:(id)arg1;
- (void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forCategory:(id)arg2 postNotification:(_Bool)arg3;
- (unsigned long long)_defaultFeedbackTypesForCategory:(id)arg1;
- (void)_updateEnabledFeedbackTypes:(unsigned long long *)arg1 forKey:(id)arg2 type:(unsigned long long)arg3;
- (void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forCategory:(id)arg2;

@end
