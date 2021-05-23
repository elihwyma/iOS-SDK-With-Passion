/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, NSURL;

@interface SSVPlaybackLeaseConfiguration : NSObject

{
    NSURL *_beginLeaseURL;
    NSURL *_getAssetURL;
    long long _leaseType;
    NSURL *_provisionMachineURL;
    NSURL *_refreshLeaseURL;
    NSString *_storeFrontSuffix;
    NSURL *_syncMachineURL;
    NSURL *_certificateURL;
    NSURL *_pastisCertificateURL;
    NSURL *_pastisKeyServerURL;
}

@property (nonatomic, readonly) long long leaseType;
@property (copy, nonatomic) NSURL *beginLeaseURL;
@property (copy, nonatomic) NSURL *certificateURL;
@property (copy, nonatomic) NSURL *getAssetURL;
@property (copy, nonatomic) NSURL *refreshLeaseURL;
@property (copy, nonatomic) NSURL *pastisCertificateURL;
@property (copy, nonatomic) NSURL *pastisKeyServerURL;
@property (copy, nonatomic) NSURL *provisionMachineURL;
@property (copy, nonatomic) NSURL *syncMachineURL;
@property (copy, nonatomic) NSString *storeFrontSuffix;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLBagDictionary:(id)arg1;
- (id)initWithCertificateURL:(id)arg1 leaseType:(long long)arg2 leaseURL:(id)arg3 pastisKeyServerURL:(id)arg4 provisionMachineURL:(id)arg5 storeFrontSuffix:(id)arg6 syncMachineURL:(id)arg7;
- (id)initWithURLBagDictionary:(id)arg1 leaseType:(long long)arg2;
- (id)initWithCertificateURL:(id)arg1 leaseURL:(id)arg2 pastisKeyServerURL:(id)arg3 provisionMachineURL:(id)arg4 storeFrontSuffix:(id)arg5 syncMachineURL:(id)arg6;

@end
