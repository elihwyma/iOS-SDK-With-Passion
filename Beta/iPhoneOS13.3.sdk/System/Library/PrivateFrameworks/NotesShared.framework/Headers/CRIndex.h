/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class NSArray, NSString;

@interface CRIndex : NSObject <Swift>

{
    NSArray *_indexPath;
}

@property (retain, nonatomic) NSArray *indexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)indexWithPath:(id)arg1;
+ (id)indexForReplica:(id)arg1 betweenIndex:(id)arg2 andIndex:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)depth;
- (id)tombstone;
- (void)setDocument:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)indexAtDepth:(unsigned long long)arg1 withInteger:(long long)arg2 replica:(id)arg3;
- (id)nextIndexForReplica:(id)arg1;
- (id)previousIndexForReplica:(id)arg1;

@end
