/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMessageTypeSearchController.h>

#import <ChatKit/Swift-Protocol.h>

@class NSString;

@interface CKPhotosSearchController : CKMessageTypeSearchController <Swift>

{
    unsigned long long _contentMode;
}

@property (nonatomic) unsigned long long contentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sectionTitle;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (Class)cellClass;
+ (id)indexingString;
+ (_Bool)supportsQuicklook;

- (double)interGroupSpacing;
- (id)filterQueries;
- (id)fetchAttributes;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (void)fractionalWidth:(double *)arg1 count:(unsigned long long *)arg2 forLayoutWidth:(unsigned long long)arg3;
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
- (id)previewViewControllerForResult:(id)arg1;
- (id)initWithSectionIndex:(unsigned long long)arg1;
- (double)_internalInterGroupSpacing;
- (_Bool)wantsHeaderSection;
- (void)_filterControlTapped:(id)arg1;
- (void)saveAttachmentForResult:(id)arg1;
- (Class)headerOverrideClass;
- (struct NSDirectionalEdgeInsets)additionalGroupInsets;

@end
