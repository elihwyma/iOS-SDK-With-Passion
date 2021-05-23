/*
 Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

#import <SpotlightUI/SPUILegibilitySceneSettings.h>

@class NSString;

@interface SPUISearchViewSceneSettings : SPUILegibilitySceneSettings

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double revealProgress;
@property (nonatomic, readonly) unsigned long long presentationSource;
@property (nonatomic, readonly) unsigned long long presentationIntent;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
