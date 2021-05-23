/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSEntity.h>

@class NSArray, NSString, NSURLRequest, SSURLRequestProperties;

@interface SSDownloadAsset : SSEntity

{
    long long _assetType;
    SSURLRequestProperties *_localProperties;
}

@property (readonly) long long fileSize;
@property (readonly) NSString *downloadFileName;
@property (readonly) NSString *downloadPath;
@property (readonly) NSString *finalizedPath;
@property (readonly, getter=isExternal) _Bool external;
@property (readonly) SSURLRequestProperties *URLRequestProperties;
@property (readonly) SSURLRequestProperties *_localProperties;
@property (retain, readonly) NSURLRequest *URLRequest;
@property (readonly) NSArray *sinfs;

+ (long long)_existsMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setValuesMessage;
+ (id)assetWithURL:(id)arg1 type:(long long)arg2;

- (void)dealloc;
- (long long)bytesDownloaded;
- (id)initWithURLRequest:(id)arg1;
- (long long)assetType;
- (long long)bytesUploaded;
- (id)copyXPCEncoding;
- (long long)_legacyAssetType;
- (void)_resetLocalIVars;
- (id)initWithURLRequestProperties:(id)arg1;
- (id)_copyURLRequestProperties;
- (long long)bytesUploadTotal;
- (id)initWithURLRequest:(id)arg1 type:(long long)arg2;

@end
