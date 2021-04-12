//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface RESiriActionsDonationsWhitelist : NSObject
{
    NSDictionary _whitelist;
//     struct os_unfair_lock_s _lock;
    NSSet *_intentWhitelistBundleIDs;
    NSSet *_userActivityWhitelistBundleIDs;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *userActivityWhitelistBundleIDs; // @synthesize userActivityWhitelistBundleIDs=_userActivityWhitelistBundleIDs;
@property(readonly, nonatomic) NSSet *intentWhitelistBundleIDs; // @synthesize intentWhitelistBundleIDs=_intentWhitelistBundleIDs;
- (BOOL)intentIsWhitelistedForBundleID:(id)arg1 andTypeName:(id)arg2;
- (id)intentWhitelistedRelevanceThresholdForBundleID:(id)arg1 andTypeName:(id)arg2;
- (BOOL)userActivityIsWhitelistedForBundleID:(id)arg1 andActivityType:(id)arg2;
- (id)userActivityWhitelistedRelevanceThresholdForBundleID:(id)arg1 andActivityType:(id)arg2;
- (id)init;

@end

