//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplicationSceneSettings.h>

#import <SpotlightUI/SPUILegibilitySceneSettings-Protocol.h>

@class _UILegibilitySettings;

@interface SPUILegibilitySceneSettings : UIApplicationSceneSettings <SPUILegibilitySceneSettings>
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3;
- (id)keyDescriptionForSetting:(long long)arg1;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;

@end

