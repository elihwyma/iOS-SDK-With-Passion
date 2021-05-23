/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSProxy.h>

@interface NSProxy (AXSideStorage)

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

@end
