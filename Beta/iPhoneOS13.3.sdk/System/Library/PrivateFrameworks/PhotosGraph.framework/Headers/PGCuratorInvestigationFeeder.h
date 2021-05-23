/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class NSArray;

@interface PGCuratorInvestigationFeeder : CLSInvestigationFeeder

{
    NSArray *_items;
}

- (id)initWithItems:(id)arg1;
- (unsigned long long)numberOfItems;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)approximateLocation;
- (id)universalStartDate;
- (id)universalEndDate;
- (id)allItems;
- (id)localStartDateComponents;
- (id)localEndDateComponents;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
