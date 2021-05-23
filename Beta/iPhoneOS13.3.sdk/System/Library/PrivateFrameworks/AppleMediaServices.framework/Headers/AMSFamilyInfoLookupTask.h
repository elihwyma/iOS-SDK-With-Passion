/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class ACAccount, NSString;

@protocol AMSBagProtocol;

@interface AMSFamilyInfoLookupTask : AMSTask <Swift>

{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    NSString *_logKey;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) id <AMSBagProtocol> bag;
@property (retain, nonatomic) NSString *logKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)_processURLResult:(id)arg1;

- (id)initWithBag:(id)arg1;
- (id)initWithBagContract:(id)arg1;
- (id)_performFamilyInfoRequestForAccount:(id)arg1 error:(id *)arg2;
- (id)_cachedFamilyInfoLookupResultForAccount:(id)arg1;
- (void)_cacheFamilyInfoLookupResult:(id)arg1 forAccount:(id)arg2;
- (id)_pathForCachedFamilyInfoLookupResult;
- (id)_currentCachedFamilyInfo;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;
- (id)performFamilyInfoLookup;

@end
