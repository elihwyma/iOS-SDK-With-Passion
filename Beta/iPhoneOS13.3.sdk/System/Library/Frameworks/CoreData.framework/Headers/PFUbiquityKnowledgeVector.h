/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

#import <CoreData/Swift-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityKnowledgeVector : NSObject <Swift>

{
    NSDictionary *_kv;
    NSDictionary *_storeKVDict;
    unsigned long long _hash;
}

@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long length;

+ (_Bool)supportsSecureCoding;
+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg1;
+ (id)createKnowledgeVectorDictionaryFromString:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)transactionNumberForPeerID:(id)arg1;
- (id)initWithStoreKnowledgeVectorDictionary:(id)arg1;
- (void)updateWithKnowledgeVector:(id)arg1;
- (_Bool)isZeroVector;
- (_Bool)isAncestorOfKnowledgeVector:(id)arg1;
- (id)allPeerIDs;
- (_Bool)conflictsWithKnowledgeVector:(id)arg1;
- (id)createStoreKnowledgeVectorDictionary;
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)arg1;
- (id)createKnowledgeVectorString;
- (id)newKnowledgeVectorBySubtractingVector:(id)arg1;
- (id)initWithKnowledgeVectorDictionary:(id)arg1;
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg1;
- (id)createAncestorVectorForConflictingVector:(id)arg1;
- (id)newKnowledgeVectorByIncrementingPeerWithID:(id)arg1;
- (id)createSetOfAllPeerIDsWithOtherVector:(id)arg1;
- (void)_updateHash;
- (id)initFromCopy:(id)arg1 storeKVDict:(id)arg2 hash:(unsigned long long)arg3;
- (id)initWithKnowledgeVectorDictionary:(id)arg1 andStoreKnowledgeVectorDictionary:(id)arg2;
- (id)initWithKnowledgeVectorString:(id)arg1;
- (_Bool)hasPeerIDInCommonWith:(id)arg1;
- (_Bool)isDescendantOfKnowledgeVector:(id)arg1;
- (void)decrementToMinimumWithKnowledgeVector:(id)arg1;
- (_Bool)canMergeWithKnowledgeVector:(id)arg1;

@end
