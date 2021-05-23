/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPSectionedIdentifierList, NSArray, NSMutableArray, NSString;

@interface _MPIdentifierListSectionProxy : NSObject

{
    NSString *_sectionIdentifier;
    MPSectionedIdentifierList *_sectionedIdentifierList;
    NSMutableArray *_mutableItemIdentifiers;
}

@property (retain, nonatomic) NSMutableArray *mutableItemIdentifiers;
@property (copy, nonatomic, readonly) NSString *sectionIdentifier;
@property (weak, nonatomic, readonly) MPSectionedIdentifierList *sectionedIdentifierList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *itemIdentifiers;

- (void)removeItem:(id)arg1;
- (id)initWithSection:(id)arg1 sectionedIdentifierList:(id)arg2 existingItemIdentifiers:(id)arg3;
- (void)insertItemsAtHead:(id)arg1;
- (void)insertItems:(id)arg1 afterItem:(id)arg2;
- (void)insertItemsAtTail:(id)arg1;
- (void)moveItemToHead:(id)arg1;
- (void)moveItem:(id)arg1 afterItem:(id)arg2;
- (void)moveItemToTail:(id)arg1;
- (void)updateSection;
- (void)updateItem:(id)arg1;
- (void)applyChanges:(id)arg1 itemLookupBlock:(CDUnknownBlockType)arg2;

@end
