/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UIDebugLogReport;

__attribute__((visibility("hidden")))
@interface _UIDeepestPreferredEnvironmentSearch : NSObject

{
    _Bool _allowsFocusRestoration;
    _UIDebugLogReport *_debugReport;
}

@property (nonatomic) _Bool allowsFocusRestoration;
@property (retain, nonatomic) _UIDebugLogReport *debugReport;

- (id)deepestPreferredFocusEnvironmentForEnvironment:(id)arg1;
- (void)_reportStartingSearch;
- (void)_reportFinishedEvaluatingAllPreferencesForEnvironmentInContext:(id)arg1 result:(long long)arg2;
- (void)_reportSearchingEnvironment:(id)arg1;
- (void)_reportFoundFocusableItem:(id)arg1;
- (void)_reportDidFinishEnumeratingPreferencesWithDeepestPreferredFocusableItem:(id)arg1;
- (id)_overridingPreferredFocusEnvironmentForPreferredEnvironment:(id)arg1 visitedFocusEnvironments:(id)arg2;
- (void)_reportDidFindOverridingPreferredFocusEnvironment:(id)arg1 source:(id)arg2;
- (id)deepestPreferredFocusableItemForEnvironment:(id)arg1 inFocusSystem:(id)arg2;

@end
