/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSURL, TIAssetAttributes;

@interface TIAsset : NSObject

{
    long long _numberOfAssertions;
    TIAssetAttributes *_attributes;
    NSURL *_url;
    long long _contentVersion;
    long long _compatibilityVersion;
    NSArray *_contents;
    unsigned long long _sizeInBytes;
}

@property (nonatomic, readonly) TIAssetAttributes *attributes;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) long long contentVersion;
@property (nonatomic, readonly) long long compatibilityVersion;
@property (nonatomic, readonly) NSArray *contents;
@property (nonatomic, readonly) _Bool isCompatible;
@property (nonatomic, readonly) unsigned long long sizeInBytes;

+ (long long)supportedCompatibilityVersion;
+ (_Bool)shouldLenientlyMatchWithContentItemsForRegion:(id)arg1;
+ (id)knownAssetTypes;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)recursiveDescription;
- (void)addAssertion;
- (void)removeAssertion;
- (id)initWithASAsset:(id)arg1;
- (id)initWithAttributes:(id)arg1 url:(id)arg2 contentVersion:(long long)arg3 compatibilityVersion:(long long)arg4 sizeInBytes:(unsigned long long)arg5 contents:(id)arg6;
- (id)assetContentItemsMatching:(id)arg1;
- (id)laterAsset:(id)arg1;
- (_Bool)hasAssertions;

@end
