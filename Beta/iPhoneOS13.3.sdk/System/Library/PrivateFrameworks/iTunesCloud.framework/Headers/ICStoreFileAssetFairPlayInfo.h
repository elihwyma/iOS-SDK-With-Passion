/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSData, NSDictionary;

@interface ICStoreFileAssetFairPlayInfo : NSObject <Swift>

{
    NSDictionary *_responseSinfDictionary;
}

@property (copy, nonatomic, readonly) NSDictionary *responseSinfDictionary;
@property (nonatomic, readonly) long long identifier;
@property (copy, nonatomic, readonly) NSData *dpInfoData;
@property (copy, nonatomic, readonly) NSData *pinfData;
@property (copy, nonatomic, readonly) NSData *sinfData;
@property (copy, nonatomic, readonly) NSData *sinf2Data;
@property (copy, nonatomic, readonly) NSDictionary *purchaseBundleSinfDictionary;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseSinfDictionary:(id)arg1;

@end
