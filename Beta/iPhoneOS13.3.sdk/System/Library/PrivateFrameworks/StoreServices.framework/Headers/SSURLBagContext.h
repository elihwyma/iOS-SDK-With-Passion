/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSData, NSDictionary, NSLock, NSMutableDictionary, NSNumber, NSString;

@interface SSURLBagContext : NSObject

{
    long long _allowedRetryCount;
    _Bool _allowsBootstrapCellularData;
    _Bool _allowsExpiredBags;
    long long _bagType;
    NSData *_clientAuditTokenData;
    NSMutableDictionary *_httpHeaders;
    _Bool _ignoresCaches;
    NSLock *_lock;
    NSNumber *_userIdentifier;
    _Bool _usesCachedBagsOnly;
}

@property (nonatomic) _Bool allowsBootstrapCellularData;
@property (nonatomic) _Bool allowsExpiredBags;
@property (retain, nonatomic) NSData *clientAuditTokenData;
@property (nonatomic, readonly) NSString *clientBundleIdentifier;
@property (nonatomic) _Bool usesCachedBagsOnly;
@property (nonatomic) long long allowedRetryCount;
@property (nonatomic) long long bagType;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic) _Bool ignoresCaches;
@property (retain, nonatomic) NSNumber *userIdentifier;
@property (copy, nonatomic) NSDictionary *allHTTPHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contextWithBagType:(long long)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)valueForHTTPHeaderField:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
