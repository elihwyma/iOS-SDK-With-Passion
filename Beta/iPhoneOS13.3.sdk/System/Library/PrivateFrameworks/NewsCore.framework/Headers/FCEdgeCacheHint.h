/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCEdgeCacheHint : NSObject <Swift>

{
    NSString *_groupName;
    NSString *_cacheControlKey;
}

@property (copy, nonatomic, readonly) NSString *groupName;
@property (copy, nonatomic, readonly) NSString *cacheControlKey;

+ (id)edgeCacheHintForTopStories;
+ (id)edgeCacheHintForBreaking;
+ (id)edgeCacheHintForTrending;
+ (id)edgeCacheHintForCoverArticles;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForToday;
+ (id)edgeCacheHintForVideos;
+ (id)edgeCacheHintForFeaturedArticles;
+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForMagazineContent;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGroupName:(id)arg1 cacheControlKey:(id)arg2;

@end
