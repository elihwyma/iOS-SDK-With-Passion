/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCHeadline.h>

@class FCHeadlineThumbnail, NSDictionary, NSString;

@protocol FCChannelProviding;

@interface FCLocalArticleHeadline : FCHeadline

{
    _Bool _webEmbedsEnabled;
    FCHeadlineThumbnail *_thumbnail;
    NSDictionary *_dictionary;
    NSString *_path;
    id <FCChannelProviding> _channel;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) id <FCChannelProviding> channel;

- (id)identifier;
- (id)title;
- (unsigned long long)contentType;
- (_Bool)hasThumbnail;
- (id)contentURL;
- (_Bool)isDeleted;
- (id)thumbnail;
- (id)lastModifiedDate;
- (id)sourceName;
- (struct CGSize)thumbnailSize;
- (id)publishDate;
- (id)videoURL;
- (double)videoDuration;
- (_Bool)isPremium;
- (_Bool)isDraft;
- (id)accessoryText;
- (id)sourceChannel;
- (id)articleID;
- (id)thumbnailAssetHandle;
- (id)localDraftPath;
- (id)contentManifestWithContext:(id)arg1;
- (id)initWithDictionary:(id)arg1 path:(id)arg2 channel:(id)arg3;
- (id)primaryAudience;
- (id)shortExcerpt;
- (id)topicIDs;
- (_Bool)isFeatureCandidate;
- (_Bool)isSponsored;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)iAdSectionIDs;
- (id)blockedStorefrontIDs;
- (id)allowedStorefrontIDs;
- (_Bool)isLocalDraft;
- (id)surfacedByBinID;
- (_Bool)useTransparentNavigationBar;
- (_Bool)webEmbedsEnabled;

@end
