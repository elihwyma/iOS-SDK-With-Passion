/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

#import <NewsToday/Swift-Protocol.h>

@class NSArray, NSDictionary, NSSet;

@interface NTItemAggregationResult : NSObject <Swift>

{
    NSDictionary *_aggregatedItemsBySectionDescriptor;
    NSSet *_itemIDsOfLeadingCells;
    NSDictionary *_slotAllocationByDynamicSlotItemID;
    NSArray *_unusedSectionDescriptors;
}

@property (copy, nonatomic) NSDictionary *aggregatedItemsBySectionDescriptor;
@property (copy, nonatomic) NSSet *itemIDsOfLeadingCells;
@property (copy, nonatomic) NSDictionary *slotAllocationByDynamicSlotItemID;
@property (copy, nonatomic) NSArray *unusedSectionDescriptors;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAggregatedItemsBySectionDescriptor:(id)arg1 itemIDsOfLeadingCells:(id)arg2 slotAllocationByDynamicSlotItemID:(id)arg3 unusedSectionDescriptors:(id)arg4;

@end
