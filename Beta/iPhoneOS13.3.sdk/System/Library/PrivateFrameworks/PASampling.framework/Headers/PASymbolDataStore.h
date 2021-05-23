/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PABinaryLocator, PAImageInfo;

@interface PASymbolDataStore : NSObject

{
    NSMutableDictionary *_uuidToSymbolOwnerDictionary;
    NSMutableDictionary *_uuidToSharedCacheImageInfoDictionary;
    NSMutableSet *_sharedCacheUUIDsAlreadySearchedFor;
    NSMutableDictionary *_uuidToCSSymbolOwnerCache;
    NSMutableDictionary *_pidToCSSymbolicatorCache;
    PAImageInfo *_systemSharedCache;
    PAImageInfo *_nonSystemSharedCache;
    PAImageInfo *_kernelCache;
    NSString *_dscSymDir;
    NSMutableArray *_dsymPaths;
    PABinaryLocator *_binaryLocator;
    _Bool _shouldSymbolicate;
    _Bool _shouldUseDsymForUUIDToFindBinaries;
    struct _CSRange _systemSharedCacheRange;
    struct _CSRange _nonSystemSharedCacheRange;
    NSMutableSet *_pidsUsingNonSystemSharedCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) PAImageInfo *systemSharedCache;
@property (retain) PAImageInfo *nonSystemSharedCache;
@property (retain) NSMutableSet *pidsUsingNonSystemSharedCache;
@property (retain) NSString *dscSymDir;
@property (retain) PAImageInfo *kernelCache;
@property _Bool shouldSymbolicate;
@property _Bool shouldUseDsymForUUIDToFindBinaries;

+ (id)classDictionaryKey;
+ (void)takeOwnershipOfCoreSymbolicationCachingPolicies;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (id)init;
- (void)dealloc;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)addSymbolsFromTailspin:(id)arg1;
- (void)addDsymPaths:(id)arg1;
- (struct _CSTypeRef)csSymbolicatorForPid:(int)arg1;
- (void)_addNewSymbolOwnerForCSSymbolOwnerRef:(struct _CSTypeRef)arg1;
- (void)_fillUUIDCacheWithKernelSymbolOwners;
- (id)symbolHandleForAddress:(unsigned long long)arg1 inLivingPid:(int)arg2;
- (id)_symbolHandleForOffsetInBinary:(unsigned long long)arg1 inImageUUID:(id)arg2 andImageMappingSlide:(unsigned long long)arg3 andPidHint:(int)arg4;
- (id)_PACSSymbolOwnerForImageUUID:(id)arg1 andPath:(id)arg2 andPidHint:(int)arg3;
- (id)_symbolHandleForOffsetIntoSymbolOwner:(unsigned long long)arg1 withSymbolOwner:(id)arg2 andSymbolOwnerBaseAddress:(unsigned long long)arg3 andPidHint:(int)arg4;
- (id)sharedCacheForPid:(int)arg1;
- (id)_sharedCacheMappingsForSharedCacheUUID:(id)arg1;
- (struct _CSRange)rangeOfSharedCacheWithPid:(int)arg1;
- (id)_symbolHandleForAddress:(unsigned long long)arg1 withImageUUIDMappings:(id)arg2 andImageMappingSlide:(unsigned long long)arg3 andPidHint:(int)arg4;
- (id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 withBinaryOffsetInTask:(unsigned long long)arg3 inLivingPid:(int)arg4;
- (id)symbolHandleForAddress:(unsigned long long)arg1 withSymbolicator:(struct _CSTypeRef)arg2;
- (void)makeSureKernelBinariesAreKnown;
- (id)addDSCSymFromBuffer:(const void *)arg1 withLength:(unsigned long long)arg2;
- (id)symbolHandleForAddress:(unsigned long long)arg1 inSampleTask:(id)arg2 isLiving:(_Bool)arg3;
- (id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 inLivingPid:(int)arg3;
- (id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 inSampleTask:(id)arg3 isLiving:(_Bool)arg4;
- (id)symbolHandleForOffset:(unsigned long long)arg1 inBinary:(id)arg2 inLivingPid:(int)arg3;
- (void)cacheSymbolicatorForPid:(int)arg1;
- (void)flushCachedSymbolicatorForPid:(int)arg1;
- (void)flushSymbolicatorCache;
- (void)flushCachedSymbolOwnerForUUID:(id)arg1;
- (void)flushSymbolOwnerCache;
- (id)copyImageInfosForLivingPid:(int)arg1;
- (_Bool)_isLikelyToBeKernelAddress:(unsigned long long)arg1;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)ownerContainingSymbol:(id)arg1;

@end
