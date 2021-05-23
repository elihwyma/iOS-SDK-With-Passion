/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class NFLFeedSettings, NSArray, NSDictionary, NSString;

@interface NFLSubBatchLayout : NSObject

{
    _Bool _valid;
    NFLFeedSettings *_feedSettings;
    NSArray *_tileInfosUsed;
}

@property (retain, nonatomic) NFLFeedSettings *feedSettings;
@property (copy, nonatomic) NSArray *tileInfosUsed;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (copy, nonatomic, readonly) NSDictionary *layoutDataByTileInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double rank;
@property (nonatomic, readonly) unsigned long long rowSpan;
@property (nonatomic, readonly) unsigned long long columnSpan;

+ (id)subBatchFromHeadlines:(id)arg1 feedSettings:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (id)singleComponentLayouts;
- (id)initWithFeedSettings:(id)arg1;
- (id)layoutInfosWithFeedSettings:(id)arg1;

@end
