/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSNumber, NSString;

@interface SSInstallAttributionParamsRequest : SSRequest

{
    _Bool _overrideCampaignLimit;
    NSNumber *_appAdamId;
    NSString *_adNetworkId;
    NSNumber *_campaignId;
    NSString *_impressionId;
    NSNumber *_timestamp;
    NSString *_attributionSignature;
    NSString *_originatingBundleId;
}

@property (nonatomic, readonly) NSNumber *appAdamId;
@property (nonatomic, readonly) NSString *adNetworkId;
@property (nonatomic, readonly) NSNumber *campaignId;
@property (nonatomic, readonly) NSString *impressionId;
@property (nonatomic, readonly) NSNumber *timestamp;
@property (nonatomic, readonly) NSString *attributionSignature;
@property (nonatomic, readonly) NSString *originatingBundleId;
@property (nonatomic, readonly) _Bool overrideCampaignLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithAppAdamId:(id)arg1 adNetworkId:(id)arg2 campaignId:(id)arg3 impressionId:(id)arg4 timestamp:(id)arg5 attributionSignature:(id)arg6 originatingBundleId:(id)arg7 overrideCampaignLimit:(_Bool)arg8;
- (id)initWithAppAdamId:(id)arg1 adNetworkId:(id)arg2 campaignId:(id)arg3 impressionId:(id)arg4 timestamp:(id)arg5 attributionSignature:(id)arg6;
- (id)initWithAppAdamId:(id)arg1 adNetworkId:(id)arg2 campaignId:(id)arg3 impressionId:(id)arg4 timestamp:(id)arg5 attributionSignature:(id)arg6 originatingBundleId:(id)arg7;

@end
