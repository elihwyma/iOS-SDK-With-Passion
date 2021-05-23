/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class CRDocument, NSMutableArray, NSOrderedSet, REMReplicaIDSource;

@interface REMCRMergeableOrderedSet : NSObject <Swift>

{
    REMReplicaIDSource *_replicaIDSource;
    struct CRDocument *_document;
    NSMutableArray *_undos;
}

@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource;
@property (retain, nonatomic) CRDocument *document;
@property (nonatomic, readonly) NSMutableArray *undos;
@property (nonatomic, readonly) NSOrderedSet *orderedSet;
@property (nonatomic, readonly) unsigned long long count;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)serializedData;
- (id)initWithReplicaIDSource:(id)arg1 document:(struct CRDocument *)arg2 undos:(id)arg3;
- (id)initWithReplicaIDSource:(id)arg1 document:(struct CRDocument *)arg2;
- (unsigned long long)indexOfEqualObject:(id)arg1;
- (id)initWithReplicaIDSource:(id)arg1 serializedData:(id)arg2 error:(id *)arg3;
- (id)initWithReplicaIDSource:(id)arg1 orderedSet:(id)arg2;
- (id)mutableOrderedSet;
- (id)mergedOrderedSetWithOrderedSet:(id)arg1 error:(id *)arg2;

@end
