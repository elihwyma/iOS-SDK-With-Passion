/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICStoreRequestContext, NSArray, NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface ICMediaAVAssetDownloadOptions : NSObject

{
    NSMutableDictionary *_httpHeaderFields;
    ICStoreRequestContext *_requestContext;
    _Bool _canUseCellularData;
    _Bool _allowDownloadOnConstrainedNetworks;
    NSString *_clientIdentifier;
    NSString *_secondaryClientIdentifier;
    long long _priority;
    NSData *_purchaseBundleMD5;
    NSArray *_purchaseBundleSinfs;
    NSNumber *_DSID;
    NSString *_redownloadParameters;
    NSNumber *_songID;
    NSString *_contentType;
    NSString *_userAgent;
    NSString *_mediaKind;
}

@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *secondaryClientIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *httpHeaderFields;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSData *purchaseBundleMD5;
@property (copy, nonatomic) NSArray *purchaseBundleSinfs;
@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSString *redownloadParameters;
@property (copy, nonatomic) NSNumber *songID;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSString *mediaKind;
@property (nonatomic) _Bool canUseCellularData;
@property (nonatomic) _Bool allowDownloadOnConstrainedNetworks;
@property (copy, nonatomic, readonly) NSDictionary *optionsDictionary;

+ (id)_avDownloadOptionsWithRequestContent:(id)arg1 properties:(id)arg2 mediaResponseItem:(id)arg3;
+ (id)_mediaKindFromResponseItemMetadata:(id)arg1;
+ (void)getMediaAVAssetDownloadOptionsWithRequestContext:(id)arg1 redownloadResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)getMediaAVAssetDownloadOptionsWithRequestContext:(id)arg1 storeMediaResponseItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (id)init;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)valueForHTTPHeaderField:(id)arg1;

@end
