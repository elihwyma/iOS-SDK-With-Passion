/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreRequestContext;

@interface ICMusicSubscriptionStatusRequest : NSObject <Swift>

{
    _Bool _shouldIgnoreCache;
    _Bool _allowsFallbackToExpiredStatus;
    _Bool _allowsFallbackToStatusNeedingReload;
    _Bool _shouldReturnLastKnownStatusOnly;
    ICStoreRequestContext *_storeRequestContext;
    long long _reason;
    long long _maximumRetryCount;
    long long _carrierBundleProvisioningStyle;
}

@property (copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (nonatomic) long long reason;
@property (nonatomic) _Bool shouldIgnoreCache;
@property (nonatomic) long long maximumRetryCount;
@property (nonatomic) _Bool allowsFallbackToExpiredStatus;
@property (nonatomic) _Bool allowsFallbackToStatusNeedingReload;
@property (nonatomic) _Bool shouldReturnLastKnownStatusOnly;
@property (nonatomic) long long carrierBundleProvisioningStyle;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreRequestContext:(id)arg1;

@end
