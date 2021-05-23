/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

#import <NotesShared/Swift-Protocol.h>

@class CRDocument, NSMapTable, NSString;

@interface CRDictionary : NSObject <Swift>

{
    CRDocument *_document;
    NSMapTable *_contents;
    long long _removeClock;
}

@property (retain, nonatomic) NSMapTable *contents;
@property (nonatomic) long long removeClock;
@property (weak, nonatomic) CRDocument *document;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)keyEnumerator;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)tombstone;
- (id)initWithDocument:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1 dictionary:(struct Dictionary *)arg2;
- (void)encodeWithCRCoder:(id)arg1 dictionary:(struct Dictionary *)arg2 elementValueCoder:(CDUnknownBlockType)arg3;
- (id)initWithCRCoder:(id)arg1 dictionary:(const struct Dictionary *)arg2;
- (id)initWithCRCoder:(id)arg1 dictionary:(const struct Dictionary *)arg2 elementValueDecoder:(CDUnknownBlockType)arg3;
- (void)mergeWithDictionary:(id)arg1;
- (void)enumerateKeysObjectsAndTimestampsUsingBlock:(CDUnknownBlockType)arg1;

@end
