/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@interface _SFSettingsAuthentication : NSObject

+ (void)authenticateForSettings:(id)arg1 allowAuthenticationReuse:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)pushSettingsAfterAuthentication:(id)arg1 onBehalfOfViewController:(id)arg2 resourceDictionary:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
