/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, PFUbiquityPeer;

__attribute__((visibility("hidden")))
@interface PFUbiquityRemotePeerState : NSManagedObject

@property (retain, nonatomic) NSNumber *transactionNumber;
@property (retain, nonatomic) NSString *peerID;
@property (retain, nonatomic) NSString *storeName;
@property (retain, nonatomic) PFUbiquityPeer *peer;

+ (id)remotePeerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)remotePeerStatesMatchingStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3;

- (id)initWithStoreName:(id)arg1 andRemotePeerID:(id)arg2 insertIntoManagedObjectContext:(id)arg3;

@end
