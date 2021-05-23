/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface NSObject (UIAccessibilitySafeCategory_Private)

@property (nonatomic, setter=_axSetIsWrappedPointer:) _Bool _axIsWrappedPointer;

+ (void)_accessibilityPerformValidations:(id)arg1;

- (id)safeValueForKey:(id)arg1;
- (id)_safeValidatedValueForKey:(id)arg1 expectedClass:(Class)arg2 possibleExpectedTypeEncodings:(const char *)arg3;
- (id)_safeValidatedValueForKey:(id)arg1 expectedClass:(Class)arg2 expectedTypeEncoding:(const char *)arg3;
- (double)safeDoubleForKey:(id)arg1;
- (id)__axValueForKey:(id)arg1;
- (void)_accessibilityPerformSafeValueKeyBlock:(CDUnknownBlockType)arg1 withKey:(id)arg2 onClass:(Class)arg3;
- (void *)safeIvarForKey:(id)arg1;
- (_Bool)safeBoolForKey:(id)arg1;
- (int)safeIntForKey:(id)arg1;
- (unsigned int)safeUnsignedIntForKey:(id)arg1;
- (long long)safeIntegerForKey:(id)arg1;
- (unsigned long long)safeUnsignedIntegerForKey:(id)arg1;
- (float)safeFloatForKey:(id)arg1;
- (double)safeTimeIntervalForKey:(id)arg1;
- (struct _NSRange)safeRangeForKey:(id)arg1;
- (double)safeCGFloatForKey:(id)arg1;
- (struct CGPoint)safeCGPointForKey:(id)arg1;
- (struct CGSize)safeCGSizeForKey:(id)arg1;
- (struct CGRect)safeCGRectForKey:(id)arg1;
- (id)safeStringForKey:(id)arg1;
- (id)safeArrayForKey:(id)arg1;
- (id)safeDictionaryForKey:(id)arg1;
- (id)safeUIViewForKey:(id)arg1;
- (id)safeValueForKeyPath:(id)arg1;
- (long long)safeIntegerForIvarKey:(id)arg1 onClass:(Class)arg2;
- (void)handleFailoversForClassNamed:(id)arg1;
- (id)_accessibilityValueForKey:(id)arg1;
- (void)_accessibilitySetValue:(id)arg1 forKey:(id)arg2 storageMode:(int)arg3;
- (void)_accessibilitySetRetainedValue:(id)arg1 forKey:(id)arg2;
- (_Bool)_accessibilityBoolValueForKey:(id)arg1;
- (long long)_accessibilityIntegerValueForKey:(id)arg1;
- (unsigned long long)_accessibilityUnsignedIntegerValueForKey:(id)arg1;
- (void)_accessibilitySetBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (void)_accessibilitySetIntegerValue:(long long)arg1 forKey:(id)arg2;
- (void)_accessibilitySetUnsignedIntegerValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)_accessibilityRemoveValueForKey:(id)arg1;
- (void)_accessibilitySetAssignedValue:(id)arg1 forKey:(id)arg2;
- (_Bool)_accessibilityIsSpeakThisTemporarilyDisabled;
- (void)_accessibilitySetSpeakThisTemporarilyDisabled:(_Bool)arg1;
- (id)axTrampolineForClass:(Class)arg1;
- (id)axSuperTrampoline;
- (id)ax_prettyDescription;
- (void)_ax_appendPrettyDescriptionToString:(id)arg1 indentationString:(id)arg2 visitedCollections:(id)arg3;

@end
