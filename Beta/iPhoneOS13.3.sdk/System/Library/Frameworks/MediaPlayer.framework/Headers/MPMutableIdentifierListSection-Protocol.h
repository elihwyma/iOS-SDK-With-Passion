/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSArray, NSString;

@protocol MPMutableIdentifierListSection <Swift>

@property (copy, nonatomic, readonly) NSString *sectionIdentifier;
@property (copy, nonatomic, readonly) NSArray *itemIdentifiers;

- (unsigned short)removeItem: /* Error: Ran out of types for this method. */;
- (unsigned short)insertItemsAtHead: /* Error: Ran out of types for this method. */;
- (unsigned short)insertItems:afterItem: /* Error: Ran out of types for this method. */;
- (unsigned short)insertItemsAtTail: /* Error: Ran out of types for this method. */;
- (unsigned short)moveItemToHead: /* Error: Ran out of types for this method. */;
- (unsigned short)moveItem:afterItem: /* Error: Ran out of types for this method. */;
- (unsigned short)moveItemToTail: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSection;
- (unsigned short)updateItem: /* Error: Ran out of types for this method. */;
- (unsigned short)applyChanges:itemLookupBlock: /* Error: Ran out of types for this method. */;

@end
