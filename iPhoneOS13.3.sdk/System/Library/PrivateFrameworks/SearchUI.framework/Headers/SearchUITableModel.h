//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SearchUITableModel : NSObject
{
    NSUInteger _queryId;
    NSArray *_tableRowModel;
    NSArray *_sections;
}

+ (id)rowModelsForResult:(id)arg1;
+ (id)resultsForMultiResultRowInSection:(id)arg1 startingAtIndex:(NSUInteger)arg2;
+ (id)gridLayoutsForCardSections:(id)arg1;
+ (id)asyncRowManagersForCardSections:(id)arg1;
+ (id)rowModelsForCardSections:(id)arg1 result:(id)arg2 isInline:(BOOL)arg3 queryId:(NSUInteger)arg4;
+ (id)rowModelForCardSection:(id)arg1 result:(id)arg2;
+ (id)combinedRowModelsForRowModels:(id)arg1 result:(id)arg2;
+ (id)tableModelWithResults:(id)arg1;
+ (id)tableModelWithResult:(id)arg1;
+ (id)tableModelWithCardSections:(id)arg1 isInline:(BOOL)arg2 queryId:(NSUInteger)arg3;
+ (BOOL)resultHasHorizontallyScrollingCardSections:(id)arg1;
+ (id)tableModelWithSections:(id)arg1 expandedSections:(id)arg2 queryId:(NSUInteger)arg3;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *tableRowModel; // @synthesize tableRowModel=_tableRowModel;
@property(readonly) NSUInteger queryId; // @synthesize queryId=_queryId;
// - (void).cxx_destruct;
- (id)description;
- (id)indexPathForRowModel:(id)arg1;
- (BOOL)shouldLeaveSpaceForChevronForIndexPath:(id)arg1;
- (BOOL)shouldDisplayChevronForIndexPath:(id)arg1;
- (id)cardSectionForIndexPath:(id)arg1;
- (NSUInteger)indexOfSection:(id)arg1;
- (id)sectionForIndex:(NSUInteger)arg1;
- (id)resultForIndexPath:(id)arg1;
- (id)rowModelForIndexPath:(id)arg1;
- (BOOL)indexPathExists:(id)arg1;
- (long long)numberOfRowsForSection:(long long)arg1;
- (id)removeRowModel:(id)arg1;
- (void)replaceResult:(id)arg1 withResult:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (NSUInteger)numberOfSections;
- (id)updatedTableModelWithExpandedSections:(id)arg1;
- (id)initWithQueryId:(NSUInteger)arg1;

@end

