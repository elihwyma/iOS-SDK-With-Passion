/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class ACAccount, AMSProcessInfo, NSString;

@protocol AMSBagProtocol, NSURLSessionDelegate><AMSURLProtocolDelegate;

@interface AMSSyncPasswordSettingsTask : AMSTask <Swift>

{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    id <NSURLSessionDelegate><AMSURLProtocolDelegate> _delegate;
    unsigned long long _freeSetting;
    unsigned long long _paidSetting;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) id <AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (weak, nonatomic, readonly) id <NSURLSessionDelegate><AMSURLProtocolDelegate> delegate;
@property (nonatomic, readonly) unsigned long long freeSetting;
@property (nonatomic, readonly) unsigned long long paidSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (unsigned long long)freePasswordSettingFromServerValue:(unsigned long long)arg1;
+ (unsigned long long)paidPasswordSettingFromServerValue:(unsigned long long)arg1;
+ (id)serverValueForFreePasswordSetting:(unsigned long long)arg1;
+ (id)serverValueForPaidPasswordSetting:(unsigned long long)arg1;

- (id)performSync;
- (id)initWithAccount:(id)arg1 freeSetting:(unsigned long long)arg2 paidSetting:(unsigned long long)arg3 delegate:(id)arg4 bag:(id)arg5;

@end
