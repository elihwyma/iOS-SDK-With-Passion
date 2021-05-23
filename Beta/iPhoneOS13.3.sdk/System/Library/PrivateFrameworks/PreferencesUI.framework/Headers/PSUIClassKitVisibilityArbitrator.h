/*
 Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

#import <Foundation/NSObject.h>

@class CLSSettingsVisibilityController;

__attribute__((visibility("hidden")))
@interface PSUIClassKitVisibilityArbitrator : NSObject

{
    unsigned long long _visibilityState;
    CDUnknownBlockType _visibilityStateChangeHandler;
    CLSSettingsVisibilityController *_visibilityController;
}

@property (nonatomic) unsigned long long visibilityState;
@property (retain, nonatomic) CLSSettingsVisibilityController *visibilityController;
@property (copy, nonatomic) CDUnknownBlockType visibilityStateChangeHandler;

- (id)init;
- (void)dealloc;
- (void)reloadVisibilityState;
- (void)settingsVisibilityDidChange:(id)arg1;

@end
