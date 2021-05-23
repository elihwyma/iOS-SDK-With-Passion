/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class ACAccount, NSArray, NSString;

@protocol AMSBagProtocol;

@interface AMSAutomaticDownloadKindsSetTask : AMSTask <Swift>

{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    NSArray *_enabledMediaKinds;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) id <AMSBagProtocol> bag;
@property (nonatomic, readonly) NSArray *enabledMediaKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;

- (id)perform;
- (id)initWithEnabledMediaKinds:(id)arg1 account:(id)arg2 bag:(id)arg3;

@end
