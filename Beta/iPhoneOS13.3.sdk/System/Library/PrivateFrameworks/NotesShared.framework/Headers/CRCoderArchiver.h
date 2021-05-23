/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/CRCoder.h>

@class NSMutableOrderedSet;

@interface CRCoderArchiver : CRCoder

{
    struct vector<CRDT::Document_DocObject *, std::__1::allocator<CRDT::Document_DocObject *>> currentDocObjectEncodingStack;
    NSMutableOrderedSet *_uuidSet;
    NSMutableOrderedSet *_keySet;
    NSMutableOrderedSet *_encodedObjects;
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
}

@property (retain, nonatomic) NSMutableOrderedSet *uuidSet;
@property (retain, nonatomic) NSMutableOrderedSet *keySet;
@property (retain, nonatomic) NSMutableOrderedSet *encodedObjects;
@property (nonatomic) struct Document *currentDocument;

+ (void)initialize;
+ (id)encodedDataWithDocument:(id)arg1;

- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (int)indexForKey:(id)arg1;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (id).cxx_construct;
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;
- (void)encodeString:(id)arg1 forKey:(id)arg2;
- (struct Document_DocObject *)currentDocumentObjectForEncoding;
- (id)encodeDocument:(id)arg1;
- (void)setTypeIndexForCurrentCustomObjectIfNecessary:(id)arg1;
- (struct Document_CustomObject *)currentCustomObjectForEncoding;
- (struct ObjectID *)mutableObjectIDForKey:(id)arg1;
- (void)encodeObject:(id)arg1 forObjectID:(struct ObjectID *)arg2;
- (void)encodeUUID:(id)arg1 forKey:(id)arg2;
- (void)encodeUInt32:(unsigned int)arg1 forKey:(id)arg2;
- (unsigned long long)encodeUUIDIndexFromUUID:(id)arg1;

@end
