/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, PFUbiquityPeer, PFUbiquityStoreMetadata;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerState : NSManagedObject

@property (retain, nonatomic) NSString *lastProcessedTransactionLogURL;
@property (retain, nonatomic) NSString *storeName;
@property (retain, nonatomic) NSNumber *transactionNumber;
@property (retain, nonatomic) PFUbiquityPeer *peer;
@property (retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;

+ (id)peerStateForStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3 createIfMissing:(_Bool)arg4;
+ (id)peerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)peerStateForStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)peerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2 omittingLocalPeerID:(id)arg3;

- (id)initWithStoreName:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
