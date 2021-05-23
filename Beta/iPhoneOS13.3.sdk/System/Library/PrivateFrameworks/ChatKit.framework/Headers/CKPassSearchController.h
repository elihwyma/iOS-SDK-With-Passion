/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMessageTypeSearchController.h>

#import <ChatKit/Swift-Protocol.h>

@class NSString;

@interface CKPassSearchController : CKMessageTypeSearchController <Swift>

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
+ (unsigned long long)recencyRankedTargetResultCount;
+ (_Bool)previewControllerPresentsModally;

- (double)interGroupSpacing;
- (id)filterQueries;
- (id)fetchAttributes;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id)queryAttributesForText:(id)arg1;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (_Bool)applyLayoutMarginsToLayoutGroup;
- (id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (id)_pasteboardItemsForResult:(id)arg1;
- (id)_activityItemProviderForResult:(id)arg1;
- (id)previewViewControllerForResult:(id)arg1;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;

@end
