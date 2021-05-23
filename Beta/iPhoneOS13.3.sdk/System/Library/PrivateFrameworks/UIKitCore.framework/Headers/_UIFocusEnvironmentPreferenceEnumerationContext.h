/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, NSString, UIFocusSystem, _UIDebugLogReport;

@protocol UIFocusEnvironment, _UIFocusEnvironmentPreferenceEnumerationContextDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusEnvironmentPreferenceEnumerationContext : NSObject

{
    UIFocusSystem *_focusSystem;
    NSMutableArray *_visitedEnvironmentStack;
    id <UIFocusEnvironment> _lastPrimaryPreferredEnvironment;
    NSArray *_cachedPreferredEnvironments;
    NSHashTable *_allVisitedEnvironments;
    _Bool _hasResolvedPreferredFocusEnvironments;
    _Bool _hasNeverPopped;
    _Bool _cachedPrefersNothingFocused;
    id <UIFocusEnvironment> _environment;
    id <_UIFocusEnvironmentPreferenceEnumerationContextDelegate> _delegate;
    _UIDebugLogReport *_debugReport;
}

@property (weak, nonatomic) id <_UIFocusEnvironmentPreferenceEnumerationContextDelegate> delegate;
@property (retain, nonatomic) _UIDebugLogReport *debugReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <UIFocusEnvironment> environment;
@property (nonatomic, readonly) _Bool isPrimaryPreference;
@property (nonatomic, readonly) _Bool isLeafPreference;
@property (nonatomic, readonly, getter=isPreferredByItself) _Bool preferredByItself;
@property (nonatomic, readonly) _Bool prefersNothingFocused;
@property (nonatomic, readonly) id <UIFocusEnvironment> preferringEnvironment;
@property (nonatomic, readonly) NSArray *preferredEnvironments;

- (id)init;
- (void)_resolvePreferredFocusEnvironments;
- (id)_inferPreferencesForEnvironment:(id)arg1;
- (_Bool)_isAllowedToPreferEnvironment:(id)arg1;
- (void)_reportInferredPreferredFocusEnvironment:(id)arg1;
- (void)_invalidatePreferredEnvironments;
- (id)initWithInitialFocusEnvironment:(id)arg1;
- (void)pushEnvironment:(id)arg1;
- (void)popEnvironment;

@end
