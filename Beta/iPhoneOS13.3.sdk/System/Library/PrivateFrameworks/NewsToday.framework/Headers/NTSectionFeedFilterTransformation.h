/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NTFeedTransforming;

@interface NTSectionFeedFilterTransformation : NSObject

{
    unsigned long long _embedsLimit;
    id <NTFeedTransforming> _underlyingTransformation;
}

@property (nonatomic, readonly) unsigned long long embedsLimit;
@property (nonatomic, readonly) id <NTFeedTransforming> underlyingTransformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)transformFeedItems:(id)arg1;
- (id)initWithTodayData:(id)arg1 configurationManager:(id)arg2 readArticlesFilterMethod:(int)arg3 seenArticlesFilterMethod:(int)arg4 minimumTimeSinceFirstSeenToFilter:(double)arg5 supplementalFeedFilterOptions:(long long)arg6 embedsLimit:(unsigned long long)arg7 otherArticleIDs:(id)arg8 otherClusterIDs:(id)arg9 filterDate:(id)arg10;

@end
