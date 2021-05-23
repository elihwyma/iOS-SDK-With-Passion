/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSArray;

__attribute__((visibility("hidden")))
@interface _CNChangeHistoryContactRefillStrategy : NSObject

{
    _Bool _unifyResults;
    NSArray *_keys;
    CNContactStore *_contactStore;
}

@property (copy, nonatomic, readonly) NSArray *keys;
@property (nonatomic, readonly) _Bool unifyResults;
@property (nonatomic, readonly) CNContactStore *contactStore;

- (id)initWithKeysToFetch:(id)arg1 unifyResults:(_Bool)arg2 contactStore:(id)arg3;
- (id)batchesToRepresentObjects:(id)arg1 suggestedBatchSize:(unsigned long long)arg2;
- (id)objectsRepresentedByBatch:(id)arg1;
- (id)fetchContactsWithIdentifiers:(id)arg1;
- (id)updateChanges:(id)arg1 withFetchedContacts:(id)arg2;

@end
