/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface SSVPlaybackAsset : NSObject

{
    NSDictionary *_assetDictionary;
}

@property (copy, nonatomic, readonly) NSDictionary *assetDictionary;
@property (nonatomic, readonly) NSString *downloadKey;
@property (nonatomic, readonly) NSString *flavor;
@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, readonly) NSArray *sinfs;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAssetDictionary:(id)arg1;

@end
