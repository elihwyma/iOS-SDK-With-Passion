/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class ACAccount, AMSProcessInfo, NSArray, NSDictionary, NSString;

@protocol AMSBagProtocol;

@interface AMSMediaTask : AMSTask <Swift>

{
    _Bool _URLKnownToBeTrusted;
    ACAccount *_account;
    NSArray *_additionalPlatforms;
    id <AMSBagProtocol> _bag;
    NSArray *_bundleIdentifiers;
    NSString *_clientIdentifier;
    AMSProcessInfo *_clientInfo;
    NSString *_clientVersion;
    NSDictionary *_filters;
    NSArray *_includedResultKeys;
    NSArray *_itemIdentifiers;
    NSString *_logKey;
    NSString *_searchTerm;
    long long _type;
}

@property (nonatomic) _Bool URLKnownToBeTrusted;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSArray *additionalPlatforms;
@property (nonatomic, readonly) id <AMSBagProtocol> bag;
@property (retain, nonatomic) NSArray *bundleIdentifiers;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic, readonly) NSString *clientVersion;
@property (retain, nonatomic) NSDictionary *filters;
@property (retain, nonatomic) NSArray *includedResultKeys;
@property (retain, nonatomic) NSArray *itemIdentifiers;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) NSString *searchTerm;
@property (nonatomic, readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;

- (id)perform;
- (id)initWithType:(long long)arg1 clientIdentifier:(id)arg2 clientVersion:(id)arg3 bag:(id)arg4;

@end
