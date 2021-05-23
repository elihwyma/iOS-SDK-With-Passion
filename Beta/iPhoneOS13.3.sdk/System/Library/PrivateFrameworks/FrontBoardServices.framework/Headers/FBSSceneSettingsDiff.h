/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSSettingsDiff.h>

@interface FBSSceneSettingsDiff : FBSSettingsDiff

+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (void)evaluateWithInspector:(id)arg1 context:(void *)arg2;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)arg1;

@end
