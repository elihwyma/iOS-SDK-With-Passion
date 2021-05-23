/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSDictionary, NSSet, NSString, NSURL, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityStoreMetadata : NSManagedObject

@property (retain, nonatomic) NSDictionary *storeOptions;
@property (nonatomic, readonly) NSURL *ubiquityRootURL;
@property (readonly) PFUbiquityLocation *ubiquityRootLocation;
@property (retain, nonatomic) NSData *storeOptionsBinaryPlistData;
@property (retain, nonatomic) NSString *modelVersionHashString;
@property (retain, nonatomic) NSString *storeURLString;
@property (retain, nonatomic) NSString *ubiquityName;
@property (retain, nonatomic) NSString *storeType;
@property (retain, nonatomic) NSString *ubiquityRootURLString;
@property (retain, nonatomic) NSString *storeIdentifier;
@property (retain, nonatomic) NSString *ubiquityRelativePath;
@property (retain, nonatomic) NSSet *transactionEntries;
@property (retain, nonatomic) NSSet *peerStates;
@property (retain, nonatomic) NSSet *primaryKeyRanges;

+ (id)metadataForStoreWithName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)storeMetadatasWithName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)baselineRootDirectoryForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)allStoreMetadataInManagedObjectContext:(id)arg1;
+ (id)baselineStoreURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineGCModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineMetaFileURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (_Bool)isBaselineRootURL:(id)arg1;

- (id)peerStateForPeerID:(id)arg1;
- (id)initWithUbiquityName:(id)arg1 andUbiquityRootLocation:(id)arg2 insertIntoManagedObjectContext:(id)arg3;
- (void)updateWithStore:(id)arg1 andRootLocation:(id)arg2;
- (void)loadFromBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2;
- (void)updatePeerStatesToMatchKnowledgeVector:(id)arg1;

@end
