/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICStoreFinanceItemMetadata, NSArray, NSData, NSDictionary, NSString, NSURL;

@interface ICStoreFileAssetInfo : NSObject

{
    NSDictionary *_responseDictionary;
    NSURL *_assetURL;
    NSString *_downloadKey;
    NSArray *_fairPlayInfoList;
    long long _flavorType;
    NSString *_fileExtension;
    unsigned long long _fileSize;
    ICStoreFinanceItemMetadata *_metadata;
    NSData *_md5;
    long long _expectedProtectionType;
}

@property (copy, nonatomic) NSURL *assetURL;
@property (copy, nonatomic) NSString *downloadKey;
@property (nonatomic) long long expectedProtectionType;
@property (copy, nonatomic) NSArray *fairPlayInfoList;
@property (nonatomic) long long flavorType;
@property (copy, nonatomic) NSString *fileExtension;
@property (nonatomic) unsigned long long fileSize;
@property (copy, nonatomic) ICStoreFinanceItemMetadata *metadata;
@property (copy, nonatomic) NSData *md5;
@property (copy, nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) long long protectionType;

- (id)initWithFileAssetResponseDictionary:(id)arg1;
- (id)_metadataDictionary;
- (id)initWithAssetURL:(id)arg1;

@end
