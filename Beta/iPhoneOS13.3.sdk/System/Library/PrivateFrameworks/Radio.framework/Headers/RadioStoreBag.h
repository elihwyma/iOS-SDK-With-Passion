/*
 Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL, SSVPlatformContext;

@interface RadioStoreBag : NSObject

{
    NSArray *_amdDomains;
    NSString *_leaseCertificateURLString;
    NSDictionary *_mescalRequestWhitelist;
    NSDictionary *_mescalResponseWhitelist;
    NSString *_mescalSetupCertURLString;
    NSString *_mescalSetupURLString;
    SSVPlatformContext *_platformContext;
    NSNumber *_shouldSendKBSyncDataValue;
    NSString *_srdnldURLString;
    NSString *_storeFrontSuffix;
    NSDictionary *_tiltDictionary;
}

@property (copy, nonatomic, readonly) NSDictionary *URLBagDictionary;
@property (nonatomic, readonly) NSString *leaseCertificateURLString;
@property (nonatomic, readonly) NSString *mescalCertificateURLString;
@property (nonatomic, readonly) NSString *mescalSetupURLString;
@property (nonatomic, readonly, getter=isAdFreeRadioEnabled) _Bool adFreeRadioEnabled;
@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSString *platformLookupURLString;
@property (nonatomic, readonly) NSDictionary *radioConfigurationDictionary;
@property (nonatomic, readonly) _Bool shouldSendKBSyncData;
@property (nonatomic, readonly) NSString *storeFrontSuffix;
@property (nonatomic, readonly) NSString *streamingDownloadURLString;

- (id)_cacheRepresentation;
- (id)_initWithURLBagDictionary:(id)arg1;
- (_Bool)shouldMescalSignRequestWithURL:(id)arg1;
- (_Bool)shouldMescalVerifyResponseFromURL:(id)arg1;
- (id)_initWithCacheRepresentation:(id)arg1;
- (id)_platformContext;

@end
