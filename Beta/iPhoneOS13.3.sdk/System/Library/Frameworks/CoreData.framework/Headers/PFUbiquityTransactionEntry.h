/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString, NSURL, PFUbiquityPeer, PFUbiquityStoreMetadata;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionEntry : NSManagedObject

@property int transactionType;
@property (readonly) NSURL *transactionLogURL;
@property (retain, nonatomic) NSNumber *transactionTypeNum;
@property (retain, nonatomic) NSString *localIDStr;
@property (retain, nonatomic) NSNumber *transactionNumber;
@property (retain, nonatomic) NSString *globalIDStr;
@property (retain, nonatomic) NSDate *transactionDate;
@property (retain, nonatomic) NSString *transactionLogFilename;
@property (retain, nonatomic) NSString *knowledgeVectorString;
@property (retain, nonatomic) PFUbiquityPeer *actingPeer;
@property (retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;

+ (id)newTransactionEntryForObjectWithCompressedGlobalID:(id)arg1 withTransactionType:(int)arg2 importContext:(id)arg3;
+ (id)createTransactionEntriesForCompressedObjectIDs:(id)arg1 withTransactionType:(int)arg2 withImportContext:(id)arg3;
+ (id)transactionEntriesMatchingGlobalObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)transactionEntriesMatchingLocalObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)transactionEntriesAfterPeerState:(id)arg1 forStoreName:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)deleteTransactionEntriesAfterPeerState:(id)arg1 forStoreName:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)transactionEntriesForPeerID:(id)arg1 withTransactionNumber:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)transactionEntriesForPeerID:(id)arg1 beforeTransacationNumber:(id)arg2 forStoreNamed:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)transactionEntryForGlobalIDString:(id)arg1 withActingPeerID:(id)arg2 atTransactionNumber:(id)arg3 inManagedObjectContext:(id)arg4;

- (id)initAndInsertIntoManagedObjectContext:(id)arg1;

@end
