/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
 */

#import <AXSpringBoardServerInstance/__AXSBReachabilityManagerAccessibility_super.h>

@interface AXSBReachabilityManagerAccessibility : __AXSBReachabilityManagerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;

- (void)_notifyObserversReachabilityModeActive:(_Bool)arg1;
- (_Bool)_axReachabilityEnabled;
- (id)_axDictionaryOfAnimationProperties;
- (id)_axReachabilitySettings;
- (void)_axSendReachabilityToggledActionWithPayload:(id)arg1;
- (void)_axAddReachabilityProperty:(id)arg1 toDictionary:(id)arg2;
- (void)_setKeepAliveTimer;

@end
