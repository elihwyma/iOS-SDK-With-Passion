/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol TIPreferencesControllerActions;

@interface UIKeyboardPreferencesController : NSObject

@property (nonatomic, readonly) UIKeyboardPreferencesController<TIPreferencesControllerActions> *preferencesActions;
@property long long handBias;
@property _Bool enableProKeyboard;

+ (id)sharedPreferencesController;
+ (id)valueForPreferenceKey:(id)arg1 domain:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (id)valueForKey:(int)arg1;
- (_Bool)boolForKey:(int)arg1;
- (_Bool)isPasswordAutoFillAllowed;
- (_Bool)boolForPreferenceKey:(id)arg1;
- (id)valueForPreferenceKey:(id)arg1;
- (double)rivenSizeFactor:(double)arg1;
- (void)setEnabledDictationLanguages:(id)arg1;
- (_Bool)allEnabledInputModesAreValid;
- (void)saveInputModes:(id)arg1;
- (void)setLanguageAwareInputModeLastUsed:(id)arg1;
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setLastUsedDictationLanguages:(id)arg1;
- (void)_configurePreferences;
- (void)preferencesControllerChanged:(id)arg1;
- (void)synchronizePreferences;
- (void)touchSynchronizePreferencesTimer;
- (_Bool)isPreferenceKeyLockedDown:(id)arg1;
- (_Bool)spaceConfirmationEnabled;
- (_Bool)isFirstReachableKeyboardInteraction;
- (void)performedFirstReachableKeyboardInteraction;

@end
