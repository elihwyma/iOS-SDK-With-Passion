/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface PASampleFrame : NSObject

{
    PASampleFrame *_parentFrame;
    NSMutableSet *_childFrames;
    unsigned long long _address;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, readonly) PASampleFrame *parentFrame;
@property (readonly) NSSet *childFrames;
@property unsigned long long address;
@property (readonly) unsigned long long symbolicationAddress;
@property (readonly) _Bool isKernel;
@property (readonly) _Bool isRootFrame;
@property (readonly) _Bool isTruncatedBacktraceFrame;

+ (id)addStack:(id)arg1 toSetOfRootFrames:(id)arg2;
+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)_newSampleFrameFromSerializedSampleFrame:(const CDStruct_a7511cde *)arg1;
+ (id)newSampleFrameWithStackFrame:(struct pa_stack_frame *)arg1 andParent:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)initWithAddress:(unsigned long long)arg1;
- (id)copyWithNewParent:(id)arg1;
- (void)_addChildFrame:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(struct NSMutableDictionary *)arg2 andDataBufferDictionary:(struct NSMutableDictionary *)arg3;
- (id)_initWithSerializedSampleFrame:(const CDStruct_a7511cde *)arg1;
- (id)initWithStackFrame:(struct pa_stack_frame *)arg1 andParent:(id)arg2;
- (id)initWithSampleFrame:(id)arg1 andParent:(id)arg2;
- (void)querySymbolInformationForSelfAndChildrenUsingTask:(id)arg1 andKernelTask:(id)arg2 andSampleTimeSeriesDataStore:(id)arg3;
- (_Bool)correspondsToStackshotFrame:(struct pa_stack_frame *)arg1;

@end
