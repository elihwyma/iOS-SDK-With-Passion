/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface PASymbol : NSObject

{
    NSString *_name;
    unsigned long long _length;
    unsigned long long _offsetInOwner;
    NSMutableArray *_sourceInfos;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) NSString *name;
@property unsigned long long length;
@property (readonly) unsigned long long offsetIntoOwner;
@property (readonly) _Bool isEmptySymbol;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)addSourceInfo:(id)arg1;
- (id)debugDescriptionForOffsetIntoOwner:(unsigned long long)arg1;
- (id)sourceInfoWithOffsetIntoSymbol:(unsigned long long)arg1;
- (void)setOffsetIntoOwner:(unsigned long long)arg1;
- (id)initWithCSSymbolRef:(struct _CSTypeRef)arg1;
- (id)initWithName:(id)arg1 length:(unsigned long long)arg2 offsetInOwner:(unsigned long long)arg3;
- (_Bool)hasAnySourceInfo;
- (id)initEmptySymbolWithOffsetIntoOwner:(unsigned long long)arg1;
- (_Bool)containsOffsetIntoSymbolOwner:(unsigned long long)arg1;
- (long long)compareToSymbol:(id)arg1;
- (long long)compareInfoRichnessToSymbol:(id)arg1;
- (void)copySourceInfoFromSymbol:(id)arg1;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)_initWithSerializedSymbol:(const CDStruct_1ca4b1b0 *)arg1;

@end
