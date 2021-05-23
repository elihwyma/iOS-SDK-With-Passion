/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString, SAInstruction;

@interface SAFrame : NSObject

{
    SAInstruction *_instruction;
    unsigned long long _address;
    SAFrame *_parentFrame;
    id _childFrameOrFrames;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property unsigned long long address;
@property (retain) SAInstruction *instruction;
@property (retain) SAFrame *parentFrame;
@property (retain) id childFrameOrFrames;
@property (readonly) _Bool symbolicationOffByOne;
@property (readonly) _Bool isKernel;
@property (readonly) _Bool isRootFrame;
@property (readonly) _Bool isTruncatedBacktraceFrame;

+ (void)enumerateFrameTree:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)frameWithAddress:(unsigned long long)arg1 binaryLoadInfo:(id)arg2 parent:(id)arg3 symbolicationOffByOne:(_Bool)arg4;
+ (id)addStack:(id)arg1 toSetOfRootFrames:(id)arg2;
+ (void)fixupInstructionsInFrameTree:(id)arg1 binaryLoadInfos:(id)arg2 libraryCache:(id)arg3;
+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_f51ef38d *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)frameWithPAStyleSerializedFrame:(const CDStruct_1a4856f2 *)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)initWithAddress:(unsigned long long)arg1 binaryLoadInfo:(id)arg2 parent:(id)arg3 symbolicationOffByOne:(_Bool)arg4;
- (id)initWithFrame:(id)arg1 andParent:(id)arg2;
- (id)copyWithNewParent:(id)arg1;
- (void)_addChildFrame:(id)arg1;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (_Bool)addSelfToBuffer:(CDStruct_f51ef38d *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (void)populateReferencesUsingBuffer:(CDStruct_f51ef38d *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;
- (void)populateReferencesUsingPAStyleSerializedFrame:(const CDStruct_1a4856f2 *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;

@end
