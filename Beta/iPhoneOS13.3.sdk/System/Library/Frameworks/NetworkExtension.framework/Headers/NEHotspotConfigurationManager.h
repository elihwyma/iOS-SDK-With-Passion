/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEHotspotConfigurationManager : NSObject

+ (id)sharedManager;

- (id)errorWithCode:(long long)arg1;
- (id)serializeConfiguration:(id)arg1;
- (void)applyConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeConfigurationForSSID:(id)arg1;
- (void)removeConfigurationForHS20DomainName:(id)arg1;
- (void)getConfiguredSSIDsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
