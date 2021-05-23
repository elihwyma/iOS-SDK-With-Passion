/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class CSTopHitSearchQuery, EFMutableInt64Set, NSArray;

@interface EMSearchableIndexTopHitsQueryResult : NSObject

{
    CSTopHitSearchQuery *_topHitSearchQuery;
    NSArray *_foundItems;
    EFMutableInt64Set *_libraryIdentifiers;
}

@property (retain, nonatomic) CSTopHitSearchQuery *topHitSearchQuery;
@property (copy, nonatomic) NSArray *foundItems;
@property (retain, nonatomic) EFMutableInt64Set *libraryIdentifiers;

- (long long)rankingIndexForMessageLibraryID:(id)arg1;
- (long long)rankingIndexForConversationID:(id)arg1;
- (id)initWithTopHitSearchQuery:(id)arg1 foundItems:(id)arg2;
- (void)userDidInteractWithLibraryIdentifier:(id)arg1;
- (void)userDidInteractWithConversationID:(id)arg1;

@end
