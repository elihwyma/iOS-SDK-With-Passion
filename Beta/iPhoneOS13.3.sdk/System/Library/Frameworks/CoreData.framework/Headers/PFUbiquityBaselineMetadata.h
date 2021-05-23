/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

#import <CoreData/Swift-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, PFUbiquityKnowledgeVector, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineMetadata : NSObject <Swift>

{
    NSString *_storeName;
    NSString *_authorPeerID;
    NSString *_modelVersionHash;
    PFUbiquityLocation *_rootLocation;
    PFUbiquityKnowledgeVector *_pKV;
    PFUbiquityKnowledgeVector *_kv;
    NSMutableDictionary *_peerRanges;
}

@property (readonly) NSString *storeName;
@property (readonly) NSString *authorPeerID;
@property (readonly) NSString *modelVersionHash;
@property (readonly) PFUbiquityLocation *rootLocation;
@property (nonatomic, readonly) PFUbiquityKnowledgeVector *previousKnowledgeVector;
@property (readonly) PFUbiquityKnowledgeVector *knowledgeVector;
@property (readonly) NSDictionary *peerRanges;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (void)setKnowledgeVector:(id)arg1;
- (_Bool)gatherMetadataWithStore:(id)arg1 andError:(id *)arg2;
- (id)createNewLocalRangeWithRangeStart:(unsigned long long)arg1 andRangeEnd:(unsigned long long)arg2 forEntityNamed:(id)arg3;
- (void)addDictionaryForPeerRange:(id)arg1;
- (id)createPeerRangeDictionary:(id)arg1;
- (void)setPreviousKnowledgeVectorFromCurrentMetadata:(id)arg1;
- (void)_migrateToModelVersionHash:(id)arg1;

@end
