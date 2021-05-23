/*
 Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

#import <SpotlightUI/SPUIMutableLegibilitySceneSettings.h>

@class NSString;

@interface SPUIMutableSearchViewSceneSettings : SPUIMutableLegibilitySceneSettings

@property (nonatomic) double revealProgress;
@property (nonatomic) unsigned long long presentationSource;
@property (nonatomic) unsigned long long presentationIntent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
