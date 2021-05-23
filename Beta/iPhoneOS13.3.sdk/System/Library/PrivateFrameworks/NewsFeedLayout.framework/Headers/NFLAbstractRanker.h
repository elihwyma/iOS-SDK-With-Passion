/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class NFLAbstractCellPropertyProvider, NFLFeedSettings, NSString;

@interface NFLAbstractRanker : NSObject

{
    NFLAbstractRanker *_nextRanker;
    NFLFeedSettings *_feedSettings;
    NFLAbstractCellPropertyProvider *_propertyProvider;
}

@property (nonatomic, readonly) NSString *rankerName;
@property (nonatomic, readonly) long long rankerWeight;
@property (retain, nonatomic) NFLAbstractRanker *nextRanker;
@property (weak, nonatomic) NFLFeedSettings *feedSettings;
@property (retain, nonatomic) NFLAbstractCellPropertyProvider *propertyProvider;

- (id)rankedLayoutForLayoutData:(id)arg1 withTileInfo:(id)arg2;
- (id)initWithFeedSettings:(id)arg1;
- (double)rankLayoutData:(id)arg1 withTileInfo:(id)arg2 veto:(_Bool *)arg3;
- (double)_applyRanksForCardWithLayoutData:(id)arg1 tileInfo:(id)arg2 successfulRankCount:(long long *)arg3 veto:(_Bool *)arg4 rankerDictionary:(id)arg5;

@end
