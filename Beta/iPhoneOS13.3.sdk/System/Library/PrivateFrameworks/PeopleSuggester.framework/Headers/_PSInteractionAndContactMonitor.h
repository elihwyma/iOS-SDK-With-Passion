/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class CNContactStore, NSMutableSet, NSSet, _CDInteractionStore;

@interface _PSInteractionAndContactMonitor : NSObject

{
    _CDInteractionStore *_interactionStore;
    CNContactStore *_contactStore;
    NSMutableSet *_mutableContactIdsSeen;
    NSMutableSet *_mutableContactIdsInContactStore;
}

@property (retain) NSMutableSet *mutableContactIdsSeen;
@property (retain) NSMutableSet *mutableContactIdsInContactStore;
@property (copy, nonatomic, readonly) NSSet *contactIdsSeen;
@property (copy, nonatomic, readonly) NSSet *contactIdsInContactStore;
@property (nonatomic, readonly) _CDInteractionStore *interactionStore;
@property (nonatomic, readonly) CNContactStore *contactStore;

- (id)initWithInteractionStore:(id)arg1 contactStore:(id)arg2;
- (void)populateContactIdCachesWithMessageCache:(id)arg1 shareCache:(id)arg2;
- (void)notifyWhenContactAddedToInteractionStore:(id)arg1;
- (void)fetchAllContactIdsFromContactStore;
- (void)notifyWhenContactStoreChanged;

@end
