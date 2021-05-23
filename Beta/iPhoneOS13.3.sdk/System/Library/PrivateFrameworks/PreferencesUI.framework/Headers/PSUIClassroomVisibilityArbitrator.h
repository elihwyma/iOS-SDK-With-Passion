/*
 Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

#import <Foundation/NSObject.h>

@protocol CRKSettingsUIVisibilityProvider;

__attribute__((visibility("hidden")))
@interface PSUIClassroomVisibilityArbitrator : NSObject

{
    unsigned long long _visibilityState;
    CDUnknownBlockType _visibilityStateChangeHandler;
    id <CRKSettingsUIVisibilityProvider> _visibilityProvider;
}

@property (retain, nonatomic) id <CRKSettingsUIVisibilityProvider> visibilityProvider;
@property (nonatomic) unsigned long long visibilityState;
@property (copy, nonatomic) CDUnknownBlockType visibilityStateChangeHandler;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)connectToDaemon;
- (void)reloadVisibilityState;

@end
