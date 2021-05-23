/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <FrontBoardServices/FBSOpenApplicationService.h>

@interface FBSOpenApplicationService (HealthDaemon)

+ (id)hd_defaultService;
+ (void)hd_openApplication:(id)arg1 optionsDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)hd_canOpenApplication:(id)arg1 reason:(long long *)arg2;

- (void)hd_openApplication:(id)arg1 optionsDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
