/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableOrderedSet, NSOrderedSet;

@interface CRCoder : NSObject

{
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
    NSOrderedSet *_clusterTypeSet;
}

@property (retain, nonatomic) NSMutableOrderedSet *encodedObjects;
@property (nonatomic) struct Document *currentDocument;
@property (nonatomic, readonly) NSOrderedSet *clusterTypeSet;
@property (nonatomic, readonly) NSDictionary *typeToClassDict;
@property (nonatomic, readonly) NSOrderedSet *typeSet;

+ (void)registerClass:(Class)arg1 forType:(id)arg2;
+ (void)registerCRClasses;
+ (void)_registerClass:(Class)arg1 forType:(id)arg2 cluster:(_Bool)arg3;

- (unsigned long long)typeIndexForClass:(Class)arg1;

@end
