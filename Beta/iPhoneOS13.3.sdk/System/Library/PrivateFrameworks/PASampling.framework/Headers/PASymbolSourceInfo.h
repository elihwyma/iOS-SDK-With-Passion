/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PASymbolSourceInfo : NSObject

{
    unsigned long long _offsetIntoSymbolOwner;
    unsigned long long _length;
    NSString *_fileName;
    unsigned int _lineNumber;
    unsigned int _columnNumber;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *sourceFileName;
@property (readonly) unsigned int sourceFileLineNumber;
@property (readonly) unsigned int sourceFileColumnNumber;
@property (readonly) unsigned long long offsetIntoSymbolOwner;
@property (readonly) unsigned long long length;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)_initEmptySourceInfoWithOffsetIntoSymbolOwner:(unsigned long long)arg1;
- (_Bool)isEmptySourceInfo;
- (id)initWithCSSymbolOwner:(struct _CSTypeRef)arg1 andOffsetIntoSymbolOwner:(unsigned long long)arg2;
- (id)initWithOffsetIntoSymbolOwner:(unsigned long long)arg1 length:(unsigned long long)arg2 fileName:(id)arg3 lineNumber:(unsigned int)arg4 columnNumber:(unsigned int)arg5;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)_initWithSerializedSymbolSourceInfo:(const CDStruct_8e6a935a *)arg1;
- (void)fixupOffsetFromVersion1WithSymbolOffsetIntoSymbolOwner:(unsigned long long)arg1;

@end
