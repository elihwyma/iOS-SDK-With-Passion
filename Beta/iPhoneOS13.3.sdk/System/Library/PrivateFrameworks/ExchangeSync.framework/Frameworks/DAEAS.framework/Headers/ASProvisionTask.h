/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class ASPolicy, NSDictionary, NSString;

@interface ASProvisionTask : ASTask

{
    _Bool _accountOnlyRemoteWipeSuccess;
    int _type;
    NSDictionary *_deviceInfo;
    ASPolicy *_policy;
    NSString *_key;
}

@property (nonatomic) int type;
@property (nonatomic) _Bool accountOnlyRemoteWipeSuccess;
@property (retain, nonatomic) ASPolicy *policy;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSDictionary *deviceInfo;

- (void)finishWithError:(id)arg1;
- (id)requestBody;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (int)commandCode;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (_Bool)processContext:(id)arg1;
- (id)initWithOriginalKeyForPolicyRequest:(id)arg1;
- (id)initWithPolicyAcknowledgement:(id)arg1 withKey:(id)arg2;
- (id)initWithRemoteWipeAcknowledgement:(id)arg1 withKey:(id)arg2;
- (id)initWithAccountOnlyRemoteWipeAcknowledgement:(id)arg1 withKey:(id)arg2 accountOnlyRemoteWipeSuccess:(_Bool)arg3;
- (id)_initWithType:(int)arg1 policy:(id)arg2 key:(id)arg3;
- (id)_initWithType:(int)arg1 policy:(id)arg2 key:(id)arg3 accountOnlyRemoteWipeSuccess:(_Bool)arg4;
- (id)_provisioningType;
- (id)_policyID;
- (_Bool)requiresEASVersionUpdate;

@end
