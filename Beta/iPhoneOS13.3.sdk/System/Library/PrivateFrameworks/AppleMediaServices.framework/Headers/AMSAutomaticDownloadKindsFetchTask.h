/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class ACAccount, NSString;

@protocol AMSBagProtocol;

@interface AMSAutomaticDownloadKindsFetchTask : AMSTask <Swift>

{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) id <AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;

- (id)perform;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;

@end
