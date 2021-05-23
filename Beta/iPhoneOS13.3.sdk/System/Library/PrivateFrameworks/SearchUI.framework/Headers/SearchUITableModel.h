/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SearchUITableModel : NSObject

{
    unsigned long long _queryId;
    NSArray *_tableRowModel;
    NSArray *_sections;
}

@property (retain, nonatomic) NSArray *tableRowModel;
@property (retain, nonatomic) NSArray *sections;
@property (readonly) unsigned long long queryId;

+ (id)resultsForMultiResultRowInSection:(id)arg1 startingAtIndex:(unsigned long long)arg2;
+ (_Bool)resultHasHorizontallyScrollingCardSections:(id)arg1;
+ (id)rowModelsForResult:(id)arg1;
+ (id)combinedRowModelsForRowModels:(id)arg1 result:(id)arg2;
+ (id)rowModelsForCardSections:(id)arg1 result:(id)arg2 isInline:(_Bool)arg3 queryId:(unsigned long long)arg4;
+ (id)tableModelWithResults:(id)arg1;
+ (id)tableModelWithSections:(id)arg1 expandedSections:(id)arg2 queryId:(unsigned long long)arg3;
+ (id)gridLayoutsForCardSections:(id)arg1;
+ (id)asyncRowManagersForCardSections:(id)arg1;
+ (id)tableModelWithCardSections:(id)arg1 isInline:(_Bool)arg2 queryId:(unsigned long long)arg3;
+ (id)tableModelWithResult:(id)arg1;
+ (id)rowModelForCardSection:(id)arg1 result:(id)arg2;

- (id)description;
- (unsigned long long)numberOfSections;
- (id)sectionForIndex:(unsigned long long)arg1;
- (id)initWithQueryId:(unsigned long long)arg1;
- (id)indexPathForRowModel:(id)arg1;
- (_Bool)indexPathExists:(id)arg1;
- (id)rowModelForIndexPath:(id)arg1;
- (_Bool)shouldDisplayChevronForIndexPath:(id)arg1;
- (id)updatedTableModelWithExpandedSections:(id)arg1;
- (void)replaceResult:(id)arg1 withResult:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)removeRowModel:(id)arg1;
- (long long)numberOfRowsForSection:(long long)arg1;
- (id)resultForIndexPath:(id)arg1;
- (unsigned long long)indexOfSection:(id)arg1;
- (id)cardSectionForIndexPath:(id)arg1;
- (_Bool)shouldLeaveSpaceForChevronForIndexPath:(id)arg1;

@end
