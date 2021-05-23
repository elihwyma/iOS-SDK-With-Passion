/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSUUID, SACSSymbolOwnerWrapper;

@interface SABinary : NSObject

{
    SACSSymbolOwnerWrapper *_symbolOwnerWrapper;
    unsigned long long _alreadyAttempted;
    _Bool _attemptedToGetBundleInfo;
    NSString *_name;
    unsigned long long _numInstructionsWhenLastSymbolicated;
    unsigned long long _optionsWhenLastSymbolicated;
    _Bool _hadSymbolOwnerWhenLastSymbolicated;
    _Bool _symbolOwnerWasDsymWhenLastSymbolicated;
    unsigned long long _numInstructionsWhenLastBulkSymbolicated;
    unsigned long long _textSegmentLength;
    _Bool _hasTextExecSegment;
    NSUUID *_uuid;
    NSString *_path;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleShortVersion;
    NSString *_binaryVersion;
    NSMutableDictionary *_instructions;
    NSMutableArray *_symbols;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSMutableDictionary *instructions;
@property unsigned long long textSegmentLength;
@property _Bool hasTextExecSegment;
@property (retain) NSString *name;
@property (retain) NSString *path;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *bundleVersion;
@property (retain) NSString *bundleShortVersion;
@property (retain) NSString *binaryVersion;
@property (readonly) NSMutableArray *symbols;
@property (readonly) NSUUID *uuid;

+ (void)clearCaches;
+ (void)enableImmediateCleanupOfCSSymbolOwners;
+ (id)binaryWithUUID:(id)arg1;
+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_5c58afa3 *)arg1 bufferLength:(unsigned long long)arg2;
+ (void)addSymbolsFromTailspin:(id)arg1;
+ (id)binaryWithCSSymbolOwner:(struct _CSTypeRef)arg1 isSparse:(_Bool)arg2;
+ (void)_doCachedBinariesWork:(CDUnknownBlockType)arg1;
+ (void)_doDsymPathsWork:(CDUnknownBlockType)arg1;
+ (void)_addDsymPath:(id)arg1;
+ (id)_dsymPaths;
+ (void)clearSymbolCaches;
+ (void)clearCoreSymbolicationCaches;
+ (id)binaryWithCSSymbolOwner:(struct _CSTypeRef)arg1;
+ (void)addDsymPaths:(id)arg1;
+ (void)addPath:(id)arg1 forBinaryWithUUID:(id)arg2;

- (id)initWithUUID:(id)arg1;
- (void)addPath:(id)arg1;
- (void)gatherInfoWithDataGatheringOptions:(unsigned long long)arg1 pid:(int)arg2;
- (id)instructionAtOffsetIntoTextSegment:(unsigned long long)arg1;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (_Bool)addSelfToBuffer:(CDStruct_5c58afa3 *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (void)populateReferencesUsingBuffer:(const CDStruct_5c58afa3 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;
- (void)symbolicateAllInstructionsWithOptions:(unsigned long long)arg1 pid:(int)arg2;
- (void)clearCoreSymbolicationCache;
- (void)clearSymbolCache;
- (_Bool)setSymbolOwner:(struct _CSTypeRef)arg1 isSparse:(_Bool)arg2;
- (void)addTailspinSymbols:(id)arg1;
- (id)addSymbolWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 name:(id)arg3;
- (void)checkForNewSymbolForInstruction:(id)arg1;
- (id)symbolWithOffsetIntoTextSegment:(unsigned long long)arg1;
- (_Bool)findPathViaBinaryLocator;
- (void)gatherBundleInfo;
- (_Bool)setSymbolOwner:(struct _CSTypeRef)arg1;
- (id)symbolOwnerWrapperWithOptions:(unsigned long long)arg1 pid:(int)arg2;

@end
