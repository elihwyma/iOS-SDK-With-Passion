/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMessageTypeSearchController.h>

@interface CKMessagesSearchController : CKMessageTypeSearchController

+ (id)sectionTitle;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (Class)cellClass;
+ (_Bool)supportsQuicklook;
+ (_Bool)supportsMenuInteraction;

- (id)fetchAttributes;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)queryAttributesForText:(id)arg1;
- (_Bool)applyLayoutMarginsToLayoutGroup;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (void)searchWithText:(id)arg1 mode:(unsigned long long)arg2;
- (struct NSDirectionalEdgeInsets)additionalGroupInsets;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;

@end
