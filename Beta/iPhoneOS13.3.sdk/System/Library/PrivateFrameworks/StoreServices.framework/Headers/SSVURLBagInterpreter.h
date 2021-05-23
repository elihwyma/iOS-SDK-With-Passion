/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL, SSVSAPSignaturePolicy;

@interface SSVURLBagInterpreter : NSObject

{
    NSMutableDictionary *_cachedBagValues;
    NSArray *_subscriptionSignedActions;
    SSVSAPSignaturePolicy *_subscriptionSignaturePolicy;
    NSURL *_mescalPrimingURL;
}

@property (copy, nonatomic, readonly) NSArray *AMDDomains;
@property (copy, nonatomic, readonly) NSURL *mescalCertificateURL;
@property (copy, nonatomic, readonly) NSURL *mescalSetupURL;
@property (copy, nonatomic, readonly) NSURL *mescalPrimingURL;
@property (copy, nonatomic, readonly) NSDictionary *mescalSignedActions;
@property (copy, nonatomic, readonly) NSDictionary *mescalSignedRequests;
@property (copy, nonatomic, readonly) NSDictionary *mescalSignedResponses;
@property (copy, nonatomic, readonly) NSURL *pastisCertificateURL;
@property (copy, nonatomic, readonly) NSURL *pastisKeyServerURL;
@property (copy, nonatomic, readonly) NSString *storeFrontSuffix;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLBagDictionary:(id)arg1;
- (id)cachedValueFromBag:(id)arg1 key:(id)arg2 withType:(unsigned long long)arg3 updateCache:(_Bool)arg4;
- (id)_valueForKey:(id)arg1 withClass:(Class)arg2;
- (id)URLForURLBagKey:(id)arg1;
- (id)valueForURLBagKey:(id)arg1;
- (id)initWithURLBag:(id)arg1;
- (id)initWithSSBag:(id)arg1;
- (id)mescalSignaturePolicyForRequestURL:(id)arg1;
- (id)mescalSignaturePolicyForResponseURL:(id)arg1;
- (_Bool)shouldSendAnonymousMachineIdentifierForURL:(id)arg1;

@end
