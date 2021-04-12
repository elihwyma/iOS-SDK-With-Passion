//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSTAggNode, TSTCategoryOwner, TSTGroupBy;

__attribute__((visibility("hidden")))
@interface TSTAggregator : NSObject
{
    TSTGroupBy *_groupBy;
    UUIDData_5fbc143e _columnUid;
    TSTAggNode *_aggRoot;
}

@property(readonly, nonatomic) const UUIDData_5fbc143e columnUid; // @synthesize columnUid=_columnUid;
@property(readonly, nonatomic) __weak TSTGroupBy *groupBy; // @synthesize groupBy=_groupBy;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)clearAggFormulas:(id)arg1;
- (void)rebuildAggFormulas;
- (id)aggNodeForGroupNode:(id)arg1;
- (vector_4115f7f8)cellRefsForAggNodesAtGroup:(id)arg1;
- (vector_4115f7f8)cellRefsForRowUids:(id)arg1 tableUID:(const UUIDData_5fbc143e )arg2;
- (id)description;
- (struct TSCECategoryRef)aggregateRefForType:(unsigned char)arg1 atLevel:(unsigned char)arg2 atRow:(struct TSUViewRowIndex)arg3;
- (struct TSCEValue)aggregateValueForType:(unsigned char)arg1 atLevel:(unsigned char)arg2 atRow:(struct TSUViewRowIndex)arg3;
- (struct TSCEValue)aggregateValueForType:(unsigned char)arg1 groupNodeUid:(UUIDData_5fbc143e)arg2;
@property(readonly, nonatomic) TSTCategoryOwner *categoryOwner;
- (void)encodeToArchive:(struct CategoryOwnerArchive_GroupByArchive_AggregatorArchive )arg1;
- (id)initWithArchive:(const struct CategoryOwnerArchive_GroupByArchive_AggregatorArchive )arg1 groupBy:(id)arg2;
- (id)initWithColumn:(const UUIDData_5fbc143e )arg1 forGroupBy:(id)arg2;

@end

