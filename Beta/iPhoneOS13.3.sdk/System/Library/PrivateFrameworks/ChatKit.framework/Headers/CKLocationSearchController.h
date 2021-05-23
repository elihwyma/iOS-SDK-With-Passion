/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMessageTypeSearchController.h>

#import <ChatKit/Swift-Protocol.h>

@class NSString;

@interface CKLocationSearchController : CKMessageTypeSearchController <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sectionTitle;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (Class)cellClass;
+ (id)indexingString;

- (double)interGroupSpacing;
- (id)filterQueries;
- (id)fetchAttributes;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id)queryAttributesForText:(id)arg1;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (_Bool)applyLayoutMarginsToLayoutGroup;
- (id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3;
- (void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (id)_additionalMenuActionsForResult:(id)arg1;
- (id)_pasteboardItemsForResult:(id)arg1;
- (id)_activityItemProviderForResult:(id)arg1;
- (_Bool)shouldStartMenuInteractionForResult:(id)arg1;
- (id)previewViewControllerForResult:(id)arg1;
- (id)_mapItemForResult:(id)arg1;

@end
