/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSUUID, PASymbol;

@interface PASymbolOwner : NSObject

{
    NSString *_name;
    NSString *_path;
    NSUUID *_uuid;
    unsigned long long _textSegmentLength;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleShortVersion;
    NSString *_binaryVersion;
    NSMutableArray *_symbols;
    NSArray *_oldSymbols;
    PASymbol *_testSymbol;
    _Bool _isTextExecSegment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSUUID *uuid;
@property (readonly) _Bool isTextExecSegment;
@property (retain) NSString *name;
@property (retain) NSString *path;
@property unsigned long long textSegmentLength;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSString *bundleShortVersion;
@property (readonly) NSString *binaryVersion;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)addTailspinSymbols:(id)arg1;
- (void)gatherBundleInfo;
- (unsigned long long)_insertionIndexInSymbols:(id)arg1 forSymbolWithOffsetIntoSymbolOwner:(unsigned long long)arg2;
- (id)_symbolContainingOffsetIntoSymbolOwner:(unsigned long long)arg1 inSymbols:(id)arg2;
- (void)incorporateDataFromCSSymbolOwner:(struct _CSTypeRef)arg1 andPath:(id)arg2;
- (id)initWithCSSymbolOwnerRef:(struct _CSTypeRef)arg1 andPath:(id)arg2;
- (id)addSymbol:(id)arg1;
- (id)symbolContainingOffsetIntoSymbolOwner:(unsigned long long)arg1;
- (id)oldSymbolContainingOffsetIntoSymbolOwner:(unsigned long long)arg1;
- (void)incorporateDataFromPACSSymbolOwner:(id)arg1;
- (id)initWithUUID:(id)arg1 andPath:(id)arg2 andSize:(unsigned long long)arg3 isTextExecSegment:(_Bool)arg4;
- (id)initWithCSSymbolOwnerRef:(struct _CSTypeRef)arg1;
- (id)initWithPACSSymbolOwner:(id)arg1;
- (long long)compareInfoRichnessToSymbolOwner:(id)arg1;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (_Bool)containsSymbol:(id)arg1;
- (id)_initWithSerializedSymbolOwner:(const CDStruct_663f8925 *)arg1;

@end
