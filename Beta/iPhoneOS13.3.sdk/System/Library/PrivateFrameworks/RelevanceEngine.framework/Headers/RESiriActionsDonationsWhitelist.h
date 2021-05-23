/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface RESiriActionsDonationsWhitelist : NSObject

{
    struct NSDictionary *_whitelist;
    struct os_unfair_lock_s _lock;
    NSSet *_intentWhitelistBundleIDs;
    NSSet *_userActivityWhitelistBundleIDs;
}

@property (nonatomic, readonly) NSSet *intentWhitelistBundleIDs;
@property (nonatomic, readonly) NSSet *userActivityWhitelistBundleIDs;

+ (id)sharedInstance;

- (id)init;
- (_Bool)intentIsWhitelistedForBundleID:(id)arg1 andTypeName:(id)arg2;
- (id)userActivityWhitelistedRelevanceThresholdForBundleID:(id)arg1 andActivityType:(id)arg2;
- (id)intentWhitelistedRelevanceThresholdForBundleID:(id)arg1 andTypeName:(id)arg2;
- (_Bool)userActivityIsWhitelistedForBundleID:(id)arg1 andActivityType:(id)arg2;

@end
