/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeer : NSManagedObject

@property (retain, nonatomic) NSString *peerKey;
@property (retain, nonatomic) NSString *peerCode;
@property (retain, nonatomic) NSSet *remoteStates;
@property (retain, nonatomic) NSSet *primaryKeyRanges;
@property (retain, nonatomic) NSSet *transactionEntries;
@property (retain, nonatomic) NSSet *localPeerStates;

+ (id)allPeersInManagedObjectContext:(id)arg1;
+ (id)peerForPeerID:(id)arg1 inManagedObjectContext:(id)arg2 createIfMissing:(_Bool)arg3;

@end
