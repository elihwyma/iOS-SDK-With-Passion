/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HFHomeSettingsVisibilityArbitrator : NSObject

{
    _Bool _homesConfigured;
    int _homeKitPreferencesChangeNotifyToken;
    unsigned long long _visibilityState;
    CDUnknownBlockType _visibilityStateChangeHandler;
    unsigned long long _homeAppInstallState;
}

@property (nonatomic) unsigned long long visibilityState;
@property (nonatomic) _Bool homesConfigured;
@property (nonatomic) unsigned long long homeAppInstallState;
@property (nonatomic) int homeKitPreferencesChangeNotifyToken;
@property (copy, nonatomic) CDUnknownBlockType visibilityStateChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateThisDeviceIsResidentCapable:(_Bool)arg2;
- (void)_reloadVisibilityStateIncludingInstallState:(_Bool)arg1;
- (void)_queryHomeAppInstallStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadVisibilityState;

@end
