/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHQuery.h>

@class NSArray, NSDictionary;

@interface CHStrokeGroupQuery : CHQuery

{
    NSArray *_strokeGroupItems;
    NSDictionary *_strokeGroupItemsByID;
}

@property (copy, nonatomic, setter=_setStrokeGroupItems:) NSArray *strokeGroupItems;
@property (copy, nonatomic, setter=_setStrokeGroupItemsByID:) NSDictionary *strokeGroupItemsByID;

- (void)dealloc;
- (id)debugName;
- (void)q_updateQueryResult;
- (id)q_strokeGroupItemsFromSessionResult:(id)arg1;
- (long long)q_itemTypeForStrokeGroup:(id)arg1 recognitionResult:(id)arg2;

@end
