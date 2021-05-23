/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, PFUbiquityPeer, PFUbiquityStoreMetadata;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerRange : NSManagedObject

@property (retain, nonatomic) NSNumber *peerStart;
@property (retain, nonatomic) NSNumber *end;
@property (retain, nonatomic) NSNumber *peerEnd;
@property (retain, nonatomic) NSString *peerEntityName;
@property (retain, nonatomic) NSNumber *start;
@property (retain, nonatomic) PFUbiquityPeer *peer;
@property (retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;

- (void)loadFromBaselineDictionary:(id)arg1;

@end
