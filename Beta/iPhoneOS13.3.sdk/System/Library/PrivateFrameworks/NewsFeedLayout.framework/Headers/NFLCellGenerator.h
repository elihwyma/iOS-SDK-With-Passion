/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class NFLAbstractCellPropertyProvider, NFLAbstractCellSizer, NFLAbstractRanker;

@interface NFLCellGenerator : NSObject

{
    Class _headlineTemplateClass;
    NFLAbstractRanker *_ranker;
    NFLAbstractCellSizer *_sizer;
    NFLAbstractCellPropertyProvider *_propertyProvider;
}

@property (nonatomic) Class headlineTemplateClass;
@property (nonatomic, readonly) NFLAbstractRanker *ranker;
@property (nonatomic, readonly) NFLAbstractCellSizer *sizer;
@property (nonatomic, readonly) NFLAbstractCellPropertyProvider *propertyProvider;

- (id)initWithSizer:(id)arg1 ranker:(id)arg2 propertyProvider:(id)arg3;
- (id)rankedLayoutsForTileInfo:(id)arg1 feedTemplate:(id)arg2 columnSpan:(unsigned long long)arg3 showAccessoryText:(_Bool)arg4;

@end
