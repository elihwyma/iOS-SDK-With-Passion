/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface TPSAssetURLManager : NSObject

{
    NSString *_model;
    NSURL *_collectionFeedURL;
    NSString *_assetBasePath;
    NSString *_collectionAssetFormat;
    NSString *_nestAssetFormat;
}

@property (retain, nonatomic) NSString *collectionAssetFormat;
@property (retain, nonatomic) NSString *nestAssetFormat;
@property (retain, nonatomic) NSURL *collectionFeedURL;
@property (retain, nonatomic) NSString *assetBasePath;

+ (id)defaultManager;

- (id)init;
- (void)reloadModelInformation;
- (void)updateModelInformation;
- (id)assetFormatWithBasePath:(id)arg1;
- (id)assetPathForTipID:(id)arg1 assetID:(id)arg2 languageCode:(id)arg3 sizeClass:(id)arg4 assetType:(unsigned long long)arg5 userInterfaceStyle:(long long)arg6;
- (id)assetPathForAssetID:(id)arg1 sizeClass:(id)arg2 assetType:(unsigned long long)arg3 userInterfaceStyle:(long long)arg4;

@end
