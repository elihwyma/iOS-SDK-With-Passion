/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface SSNetworkConstraints : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_sizeLimits;
}

@property (readonly, getter=isAnyNetworkTypeEnabled) _Bool anyNetworkTypeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_newModernNetworkConstraintsWithArray:(id)arg1;
+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)arg1;
+ (void)_addNetworkConstraintsToDictionary:(id)arg1 forNetworkType:(long long)arg2 legacyDictionary:(id)arg3;
+ (id)networkConstraintsForDownloadKind:(id)arg1 fromBag:(id)arg2;
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)sizeLimitForNetworkType:(long long)arg1;
- (void)_setSizeLimit:(long long)arg1 forNetworkType:(long long)arg2;
- (long long)_sizeLimitForNetworkType:(long long)arg1;
- (void)_disableAllNetworkTypes;
- (_Bool)hasSizeLimitForNetworkType:(long long)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)setSizeLimit:(long long)arg1 forNetworkType:(long long)arg2;
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)arg1;
- (id)_copySizeLimits;
- (void)setAllNetworkTypesDisabled;
- (void)disableCellularNetworkTypes;

@end
