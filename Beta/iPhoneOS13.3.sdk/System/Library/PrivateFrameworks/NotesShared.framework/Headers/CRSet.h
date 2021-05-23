/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class CRDictionary, CRDocument, NSArray, NSHashTable, NSString;

@interface CRSet : NSObject <Swift>

{
    CRDictionary *_dictionary;
    NSHashTable *_observers;
}

@property (retain, nonatomic) CRDictionary *dictionary;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) CRDocument *document;
@property (readonly) unsigned long long count;
@property (copy, readonly) NSArray *allObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)member:(id)arg1;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (_Bool)containsObject:(id)arg1;
- (void)setObject:(id)arg1;
- (id)anyObject;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)tombstone;
- (id)initWithDocument:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)initWithCRCoder:(id)arg1 set:(const struct Dictionary *)arg2;
- (void)encodeWithCRCoder:(id)arg1 set:(struct Dictionary *)arg2;
- (void)encodeWithCRCoder:(id)arg1 set:(struct Dictionary *)arg2 elementValueCoder:(CDUnknownBlockType)arg3;
- (id)initWithCRCoder:(id)arg1 set:(const struct Dictionary *)arg2 elementValueDecoder:(CDUnknownBlockType)arg3;

@end
