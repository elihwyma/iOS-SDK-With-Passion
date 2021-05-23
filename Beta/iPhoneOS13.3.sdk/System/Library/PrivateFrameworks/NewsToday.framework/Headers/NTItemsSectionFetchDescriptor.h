/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

#import <NewsToday/Swift-Protocol.h>

@class NSString, NTCatchUpOperationArticleIDsRequest, NTPBItemsTodaySectionSpecificConfig;

@interface NTItemsSectionFetchDescriptor : NSObject <Swift>

{
    NTPBItemsTodaySectionSpecificConfig *_itemsConfiguration;
    NTCatchUpOperationArticleIDsRequest *_itemsArticlesRequest;
}

@property (copy, nonatomic) NTPBItemsTodaySectionSpecificConfig *itemsConfiguration;
@property (copy, nonatomic) NTCatchUpOperationArticleIDsRequest *itemsArticlesRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)initWithItemsConfiguration:(id)arg1;

@end
