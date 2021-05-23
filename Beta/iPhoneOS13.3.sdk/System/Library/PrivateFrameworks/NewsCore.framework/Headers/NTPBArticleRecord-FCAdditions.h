/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsTransport/NTPBArticleRecord.h>

@class NSArray;

@interface NTPBArticleRecord (FCAdditions)

@property (nonatomic, readonly) NSArray *topicIDs;

- (id)generateThumbnailAssetHandleForURL:(id)arg1 withAssetManager:(id)arg2;
- (id)generateFlintDocumentAssetHandleWithAssetManager:(id)arg1;
- (id)generateWebExcerptAssetHandleWithAssetManager:(id)arg1;
- (_Bool)isAllowedInStorefront:(id)arg1;

@end
