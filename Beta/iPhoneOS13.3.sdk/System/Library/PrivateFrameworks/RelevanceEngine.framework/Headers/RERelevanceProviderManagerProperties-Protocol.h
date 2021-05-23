/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class NSArray;

@protocol RERelevanceProviderManagerProperties <Swift>

@property (nonatomic, readonly) NSArray *allRelevanceProviders;
@property (nonatomic, readonly) unsigned long long scheduledUpdatesCount;
@property (nonatomic, readonly) _Bool dataSourcesOpened;

@end
