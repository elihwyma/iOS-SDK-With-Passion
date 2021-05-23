/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactStore;

__attribute__((visibility("hidden")))
@interface _CNChangeHistoryGroupRefillStrategy : NSObject

{
    CNContactStore *_contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;

- (id)initWithContactStore:(id)arg1;
- (id)batchesToRepresentObjects:(id)arg1 suggestedBatchSize:(unsigned long long)arg2;
- (id)objectsRepresentedByBatch:(id)arg1;
- (id)fetchGroupsWithIdentifiers:(id)arg1;
- (id)updateChanges:(id)arg1 withFetchedGroups:(id)arg2;

@end
