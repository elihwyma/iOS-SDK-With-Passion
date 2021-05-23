/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, _UIDebugLogReport;

__attribute__((visibility("hidden")))
@interface _UIFocusEnvironmentPreferenceEnumerator : NSObject

{
    _Bool _allowsInferringPreferences;
    CDUnknownBlockType _didVisitAllPreferencesForEnvironmentHandler;
    CDUnknownBlockType _shouldInferPreferenceForEnvironmentHandler;
    _UIDebugLogReport *_debugReport;
}

@property (copy, nonatomic) CDUnknownBlockType didVisitAllPreferencesForEnvironmentHandler;
@property (nonatomic) _Bool allowsInferringPreferences;
@property (copy, nonatomic) CDUnknownBlockType shouldInferPreferenceForEnvironmentHandler;
@property (retain, nonatomic) _UIDebugLogReport *debugReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)_shouldInferDefaultPreferenceForEnvironmentInContext:(id)arg1;
- (void)enumeratePreferencesForEnvironment:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
