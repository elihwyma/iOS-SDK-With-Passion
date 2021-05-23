/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/CRCoder.h>

@class CRDocument, NSMutableArray, NSMutableOrderedSet, NSUUID;

@interface CRCoderUnarchiver : CRCoder

{
    NSUUID *_replica;
    CRDocument *_document;
    struct Document {
        CDUnknownFunctionPointerType *;
        basic_string_7c0a1c0b;
        unsigned int [1];
        int;
        struct VectorTimestamp *;
        struct VectorTimestamp *;
        struct RepeatedPtrField<CRDT::Document_DocObject>;
        struct RepeatedPtrField<std::__1::basic_string<char>>;
        struct RepeatedPtrField<std::__1::basic_string<char>>;
        struct RepeatedPtrField<std::__1::basic_string<char>>;
        struct VectorTimestamp *;
    } *_currentDocument;
    NSMutableArray *_allocedDocObjects;
    const struct Document_DocObject *_currentDocObjectForDecodingPtr;
    NSMutableOrderedSet *_typeSetForDecoding;
    NSMutableOrderedSet *_keySet;
    NSMutableArray *_uuidArray;
    NSMutableArray *_completionHandlers;
}

@property (copy, nonatomic) NSUUID *replica;
@property (retain, nonatomic) CRDocument *document;
@property (nonatomic) struct Document *currentDocument;
@property (retain, nonatomic) NSMutableArray *allocedDocObjects;
@property (nonatomic) const struct Document_DocObject *currentDocObjectForDecodingPtr;
@property (retain, nonatomic) NSMutableOrderedSet *typeSetForDecoding;
@property (retain, nonatomic) NSMutableOrderedSet *keySet;
@property (retain, nonatomic) NSMutableArray *uuidArray;
@property (retain, nonatomic) NSMutableArray *completionHandlers;

+ (void)initialize;
+ (id)decodedDocumentFromData:(id)arg1 replica:(id)arg2;

- (unsigned long long)indexForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (unsigned long long)decodeUInt64ForKey:(id)arg1;
- (id)decodeStringForKey:(id)arg1;
- (const struct Document_DocObject *)currentDocumentObjectForDecoding;
- (id)decodeObjectForProtobufObjectID:(const struct ObjectID *)arg1;
- (void)addDecoderCompletionHandler:(CDUnknownBlockType)arg1 dependency:(id)arg2 for:(id)arg3;
- (_Bool)hasDecodableValueForKey:(id)arg1;
- (id)decodeDocumentFromData:(id)arg1 replica:(id)arg2;
- (_Bool)willModifySelfInInitForClass:(Class)arg1;
- (id)allocedObjectAtIndex:(unsigned long long)arg1 outNeedsInit:(_Bool *)arg2;
- (void)sortCompletionHandlers;
- (const struct ObjectID *)currentObjectIDForKey:(id)arg1;
- (id)decodeUUIDForKey:(id)arg1;
- (unsigned int)decodeUInt32ForKey:(id)arg1;
- (id)decodeUUIDFromUUIDIndex:(unsigned long long)arg1;

@end
