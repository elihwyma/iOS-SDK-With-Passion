/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface NTNewsTodayResultsSourceFetchHelper : NSObject

{
    NSMutableArray *_sectionQueueDescriptors;
    NSMutableDictionary *_remainingSectionsBySectionQueueDescriptors;
}

@property (retain, nonatomic) NSMutableArray *sectionQueueDescriptors;
@property (retain, nonatomic) NSMutableDictionary *remainingSectionsBySectionQueueDescriptors;

- (id)init;
- (id)initWithSectionQueueDescriptors:(id)arg1;
- (id)sectionDescriptorsAtHeadsOfQueues;
- (void)removeSectionDescriptors:(id)arg1;

@end
