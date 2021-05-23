/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCAssetHandle, FCInterestToken, NSString, NSURL;

@protocol FCWebArchiveSource;

@interface FCWebManifest : NSObject

{
    FCAssetHandle *_excerptAssetHandle;
    NSString *_articleID;
    NSURL *_sourceURL;
    id <FCWebArchiveSource> _webArchiveSource;
    FCInterestToken *_webArchiveHoldToken;
}

@property (copy, nonatomic) NSString *articleID;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) id <FCWebArchiveSource> webArchiveSource;
@property (retain, nonatomic) FCAssetHandle *excerptAssetHandle;
@property (retain, nonatomic) FCInterestToken *webArchiveHoldToken;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSURL *baseURL;

- (id)init;
- (id)initWithArticleID:(id)arg1 sourceURL:(id)arg2 webArchiveSource:(id)arg3 excerptAssetHandle:(id)arg4;

@end
