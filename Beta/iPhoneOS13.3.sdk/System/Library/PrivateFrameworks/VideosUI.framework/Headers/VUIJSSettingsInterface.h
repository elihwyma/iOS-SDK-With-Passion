/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <ITMLKit/IKJSObject.h>

__attribute__((visibility("hidden")))
@interface VUIJSSettingsInterface : IKJSObject

- (void)dealloc;
- (id)userPreferences;
- (id)initWithAppContext:(id)arg1;
- (_Bool)sportsScoreSpoilersAllowed;
- (void)_handleSettingsDidChange:(id)arg1;
- (_Bool)privateModeEnabled;
- (id)consentedBrands;
- (id)deniedBrands;
- (unsigned long long)privacyFlowContentVersion;
- (void)forceUpdateWithCallback:(id)arg1;
- (id)appSettingsByChannelID;
- (id)wlkOverrides;
- (void)updateFeaturesConfiguration:(id)arg1;

@end
