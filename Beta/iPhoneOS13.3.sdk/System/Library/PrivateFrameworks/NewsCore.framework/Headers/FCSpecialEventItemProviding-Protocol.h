/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@protocol FCSpecialEventArticleProviding, FCSpecialEventWebEmbedProviding;

@protocol FCSpecialEventItemProviding <Swift>

@property (nonatomic, readonly) id <FCSpecialEventArticleProviding> asArticle;
@property (nonatomic, readonly) id <FCSpecialEventWebEmbedProviding> asWebEmbed;
@property (nonatomic, readonly) unsigned long long itemType;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *actionTitle;
@property (copy, nonatomic, readonly) NSString *actionUrlString;
@property (copy, nonatomic, readonly) NSString *identifier;

@end
