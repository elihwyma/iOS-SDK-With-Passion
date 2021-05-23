/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSString, PFUbiquityLocation, PFUbiquityMetadataFactoryEntry;

__attribute__((visibility("hidden")))
@interface _PFUbiquityStack : NSObject

{
    NSManagedObjectContext *_metadataMOC;
    PFUbiquityMetadataFactoryEntry *_metadataEntry;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootURL;
    NSString *_storeName;
    PFUbiquityLocation *_metadataStoreFileLocation;
}

@property (nonatomic, readonly) NSManagedObjectContext *metadataMOC;
@property (nonatomic, readonly) PFUbiquityMetadataFactoryEntry *metadataEntry;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootURL;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) PFUbiquityLocation *metadataStoreFileLocation;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)allPeers;
- (id)createMetadataStoreKnowledgeVector:(id *)arg1;
- (id)createMinMetadataStoreKnowledgeVector:(id *)arg1;
- (id)initWithMetadataEntry:(id)arg1;
- (_Bool)purgeAndInitializeMetadataStoreFileWithError:(id *)arg1;
- (_Bool)purgeMetadataForStoreMetadata:(id)arg1 withError:(id *)arg2;
- (id)peerForPeerID:(id)arg1 createIfMissing:(_Bool)arg2;

@end
