/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, NSData;

@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSAnisetteProvisionTask : AMSTask

{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    NSData *_data;
    long long _type;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) id <AMSBagProtocol> bag;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long type;

- (id)initWithData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4;
- (id)performProvisioning;
- (id)_startProvisioningWithOutputSessionID:(unsigned int *)arg1 error:(id *)arg2;
- (id)_createFinishProvisioningRequestWithClientData:(id)arg1 error:(id *)arg2;
- (_Bool)_processFinishProvisioningResult:(id)arg1 sessionID:(unsigned int)arg2 error:(id *)arg3;

@end
