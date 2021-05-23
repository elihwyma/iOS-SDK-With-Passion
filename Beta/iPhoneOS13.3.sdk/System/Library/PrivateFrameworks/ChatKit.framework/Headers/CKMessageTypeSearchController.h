/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKSearchController.h>

@class IMTimingCollection, NSArray, NSSet;

@interface CKMessageTypeSearchController : CKSearchController

{
    _Bool _searchTerminated;
    _Bool _gotResults;
    NSSet *_intermediaryResults;
    NSArray *_resultsToCheck;
    IMTimingCollection *_timingCollection;
}

@property (retain, nonatomic) NSSet *intermediaryResults;
@property (nonatomic) _Bool gotResults;
@property (nonatomic) _Bool searchTerminated;
@property (retain, nonatomic) NSArray *resultsToCheck;
@property (retain, nonatomic) IMTimingCollection *timingCollection;

+ (id)timeRankedQueries;
+ (_Bool)useRecencyRankedSearchForMode:(unsigned long long)arg1;
+ (unsigned long long)recencyRankedTargetResultCount;

- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (void)fractionalWidth:(double *)arg1 count:(unsigned long long *)arg2 forLayoutWidth:(unsigned long long)arg3;
- (void)_IMSPIQueryMessageItemsWithGUIDs:(id)arg1 results:(CDUnknownBlockType)arg2;
- (id)queryResultsForItems:(id)arg1;
- (void)postProcessAndUpdateResults:(id)arg1;
- (void)deleteAttachmentForResult:(id)arg1;
- (void)searchWithText:(id)arg1 mode:(unsigned long long)arg2;
- (struct NSDirectionalEdgeInsets)additionalGroupInsets;
- (void)searchEnded;
- (void)checkIfResultsExistOnDiskAndNotify:(id)arg1;
- (void)_asyncCheckIfResultsExistOnDisk:(id)arg1 firstBatch:(_Bool)arg2;
- (id)menuActionsForResult:(id)arg1 atRect:(struct CGRect)arg2;
- (_Bool)wantsDeleteAction;
- (id)zkwFilterQueries;
- (id)rankingQueriesWithText:(id)arg1;
- (_Bool)wantsFooterSection;
- (Class)footerClass;

@end
