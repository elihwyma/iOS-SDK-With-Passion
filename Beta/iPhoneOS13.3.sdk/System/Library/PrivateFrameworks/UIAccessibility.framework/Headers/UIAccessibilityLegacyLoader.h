/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityLegacyLoader

+ (void)initialize;
+ (void)loadExtendedAccessibilityBundles;
+ (void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 forceLoad:(_Bool)arg3 loadSubbundles:(_Bool)arg4 loadAllAccessibilityInfo:(_Bool)arg5;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 loadSubbundles:(_Bool)arg3;
+ (id)_accessibilityBundlesForBundle:(id)arg1;
+ (id)_axBundleForBundle:(id)arg1;
+ (void)_accessibilityLoadSubbundles:(id)arg1;
+ (_Bool)_accessibilityShouldSortBundlesBeforeLoading;
+ (long long)_accessibilityLoadingPriorityForBundle:(id)arg1;

@end
