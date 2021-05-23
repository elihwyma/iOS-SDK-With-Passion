/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class CRVectorTimestamp, NSMutableDictionary, NSUUID;

@interface CRDocument : NSObject

{
    CRVectorTimestamp *_version;
    CRVectorTimestamp *_startVersion;
    NSUUID *_replica;
    id _rootObject;
    NSMutableDictionary *_objects;
    long long _replicaClock;
    long long _unserializedReplicaClock;
}

@property (nonatomic, readonly) CRVectorTimestamp *version;
@property (nonatomic, readonly) CRVectorTimestamp *startVersion;
@property (nonatomic, readonly) NSUUID *replica;
@property (retain, nonatomic) id rootObject;
@property (nonatomic, readonly) long long replicaClock;
@property (nonatomic) long long unserializedReplicaClock;
@property (nonatomic, readonly) NSMutableDictionary *objects;

+ (id)unarchiveFromData:(id)arg1 replica:(id)arg2;
+ (id)documentWithReplica:(id)arg1;
+ (id)documentWithRootObject:(id)arg1 replica:(id)arg2;

- (id)init;
- (id)description;
- (void)setDocument:(id)arg1;
- (id)archivedData;
- (id)initWithReplica:(id)arg1;
- (void)realizeLocalChanges;
- (id)copyForReplica:(id)arg1;
- (unsigned long long)mergeWithDocument:(id)arg1;
- (void)setDocumentFor:(id)arg1;
- (id)localObject:(id)arg1;
- (id)initWithVersion:(id)arg1 startVersion:(id)arg2 rootObject:(id)arg3 replica:(id)arg4;
- (unsigned long long)mergeResultForMergingWithDocument:(id)arg1;
- (void)mergeTimestampWithDocument:(id)arg1;
- (id)initWithVersion:(id)arg1 rootObject:(id)arg2 replica:(id)arg3;
- (void)updateGraphDocumentPointers;
- (void)updateObjectsSet;
- (void)walkGraph:(CDUnknownBlockType)arg1 root:(id)arg2;
- (unsigned long long)mergeWithData:(id)arg1;
- (void)updateObjects:(id)arg1;
- (id)deltaSince:(id)arg1;

@end
