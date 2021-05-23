/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CSSearchQuery, NSArray, NSString;

@protocol CKSearchControllerDelegate;

@interface CKSearchController : NSObject

{
    _Bool _suppressAvatars;
    _Bool _queryRunning;
    id <CKSearchControllerDelegate> _delegate;
    NSString *_currentSearchText;
    unsigned long long _mode;
    CSSearchQuery *_query;
    CDUnknownBlockType _queryFoundItemHandler;
    CDUnknownBlockType _queryCompletionHandler;
    unsigned long long _sectionIndex;
    NSArray *_results;
}

@property (retain, nonatomic) NSArray *results;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long sectionIndex;
@property (retain, nonatomic) CSSearchQuery *query;
@property (retain, nonatomic) NSString *currentSearchText;
@property (nonatomic) _Bool queryRunning;
@property (weak, nonatomic) id <CKSearchControllerDelegate> delegate;
@property (copy, nonatomic) CDUnknownBlockType queryFoundItemHandler;
@property (copy, nonatomic) CDUnknownBlockType queryCompletionHandler;
@property (nonatomic, readonly) _Bool hasMoreResults;
@property (nonatomic) _Bool suppressAvatars;

+ (id)sectionTitle;
+ (long long)orthogonalScrollingBehavior;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (Class)cellClass;
+ (id)indexingString;
+ (_Bool)supportsQuicklook;
+ (_Bool)useRecencyRankedSearchForMode:(unsigned long long)arg1;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (_Bool)previewControllerPresentsModally;
+ (_Bool)supportsMenuInteraction;

- (double)interGroupSpacing;
- (void)didSelectResult:(id)arg1;
- (id)filterQueries;
- (id)fetchAttributes;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (unsigned long long)layoutWidth;
- (id)queryAttributesForText:(id)arg1;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (id)queryResultsForItems:(id)arg1;
- (_Bool)applyLayoutMarginsToLayoutGroup;
- (id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3;
- (void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (id)_additionalMenuActionsForResult:(id)arg1;
- (id)_pasteboardItemsForResult:(id)arg1;
- (id)_activityItemProviderForResult:(id)arg1;
- (void)deleteAttachmentForResult:(id)arg1;
- (_Bool)shouldStartMenuInteractionForResult:(id)arg1;
- (id)previewViewControllerForResult:(id)arg1;
- (_Bool)handleSelectionForResult:(id)arg1;
- (id)initWithSectionIndex:(unsigned long long)arg1;
- (_Bool)wantsHeaderSection;
- (void)searchWithText:(id)arg1 mode:(unsigned long long)arg2;
- (void)saveAttachmentForResult:(id)arg1;
- (Class)headerOverrideClass;
- (struct NSDirectionalEdgeInsets)additionalGroupInsets;
- (void)searchEnded;
- (void)cancelCurrentSearch;
- (id)menuActionsForResult:(id)arg1 atRect:(struct CGRect)arg2;
- (id)zkwFilterQueries;
- (id)rankingQueriesWithText:(id)arg1;
- (_Bool)wantsFooterSection;
- (Class)footerClass;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;
- (id)_queryStringWithText:(id)arg1;
- (id)_queryContextWithText:(id)arg1;
- (unsigned long long)queryTypeForSearchText:(id)arg1;
- (_Bool)_currentModeIsDetails;

@end
