/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface FCClusteredHeadlines : NSObject

{
    NSDictionary *_headlinesByTopicID;
    NSArray *_orphanedHeadlines;
    NSArray *_discardedOrphanedHeadlines;
    NSDictionary *_d_headlinesByNonWhitelistedTopicID;
}

@property (copy, nonatomic) NSDictionary *headlinesByTopicID;
@property (copy, nonatomic) NSArray *orphanedHeadlines;
@property (copy, nonatomic) NSArray *discardedOrphanedHeadlines;
@property (copy, nonatomic) NSDictionary *d_headlinesByNonWhitelistedTopicID;
@property (copy, nonatomic, readonly) NSArray *d_allHeadlines;

- (void)filterClustersToTopicIDs:(id)arg1;
- (void)d_sanityCheckAgainstInputHeadlines:(id)arg1;
- (id)d_JSONRepresentationWithTagController:(id)arg1 subscriptionList:(id)arg2;

@end
