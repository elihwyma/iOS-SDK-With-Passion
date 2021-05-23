/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString, _PASLock;

@interface ATXDigitalHealthBlacklist : NSObject

{
    _PASLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)deviceManagementPolicyDidChange:(id)arg1;
- (id)blacklistedBundleIds;
- (_Bool)_updateBlacklistWithNewBlacklistedBundleIds:(id)arg1 whitelistedBundleIds:(id)arg2;

@end
