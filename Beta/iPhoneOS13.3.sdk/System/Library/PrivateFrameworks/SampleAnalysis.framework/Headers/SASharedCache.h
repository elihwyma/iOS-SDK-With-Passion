/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSUUID;

@interface SASharedCache : NSObject

{
    NSUUID *_uuid;
    NSArray *_binaryLoadInfos;
    unsigned long long _textSegmentsStartAddress;
    unsigned long long _textSegmentsEndAddress;
    unsigned long long _slide;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) NSArray *binaryLoadInfos;
@property (readonly) unsigned long long slide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSUUID *uuid;
@property (readonly) unsigned long long textSegmentsStartAddress;
@property (readonly) unsigned long long textSegmentsEndAddress;

+ (void)clearCaches;
+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_0b74e904 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)currentSharedCache;
+ (id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2;
+ (void)addDSCSymData:(id)arg1;
+ (void)_doSharedCachesWork:(CDUnknownBlockType)arg1;
+ (void)_doDscSymDirsWork:(CDUnknownBlockType)arg1;
+ (id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2 findMappingsIfUnknown:(_Bool)arg3;
+ (id)dscSymDirs;
+ (void)applyBinaryLoadInfos:(id)arg1 sharedCacheUUID:(id)arg2 slide:(unsigned long long)arg3;
+ (void)addDscSymDir:(id)arg1;
+ (id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2 binaryLoadInfos:(id)arg3;

- (void)writeJSONDictionaryEntriesToStream:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (_Bool)addSelfToBuffer:(CDStruct_0b74e904 *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (void)populateReferencesUsingBuffer:(const CDStruct_0b74e904 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;
- (_Bool)matchesUUID:(unsigned char [16])arg1 slide:(unsigned long long)arg2;
- (void)_findSharedCacheMappings;
- (id)initWithUUID:(id)arg1 slide:(unsigned long long)arg2;

@end
