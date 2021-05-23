/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString, SABinary, SASourceInfo, SASymbol;

@interface SAInstruction : NSObject

{
    unsigned long long _offsetIntoTextSegment;
    SABinary *_binary;
    SASymbol *_symbol;
    SASourceInfo *_sourceInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak) SABinary *binary;
@property unsigned long long offsetIntoTextSegment;
@property (retain) SASymbol *symbol;
@property (retain) SASourceInfo *sourceInfo;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_e7a0f457 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)instructionWithBinary:(id)arg1 offsetIntoTextSegment:(unsigned long long)arg2;
+ (id)invalidInstruction;

- (_Bool)symbolicateWithOptions:(unsigned long long)arg1 pid:(int)arg2;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (_Bool)addSelfToBuffer:(CDStruct_0ce2a4d3 *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (void)populateReferencesUsingBuffer:(const CDStruct_e7a0f457 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;

@end
