/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SATurnstileInfo : NSObject

{
    unsigned char _priority;
    unsigned char _numHops;
    unsigned long long _context;
    unsigned long long _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long context;
@property (readonly) unsigned char priority;
@property (readonly) unsigned char numHops;
@property (readonly) unsigned long long flags;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_f186406e *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)turnstileInfoWithKCDataTurnstileInfo:(const struct stackshot_thread_turnstileinfo *)arg1;

- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (_Bool)addSelfToBuffer:(CDStruct_f186406e *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (void)populateReferencesUsingBuffer:(const CDStruct_f186406e *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;
- (_Bool)matchesKCDataTurnstileInfo:(const struct stackshot_thread_turnstileinfo *)arg1;
- (_Bool)displaysSameContentAs:(id)arg1 withDisplayOptions:(unsigned long long)arg2;
- (id)initWithKCDataTurnstileInfo:(const struct stackshot_thread_turnstileinfo *)arg1;
- (id)descriptionForTid:(unsigned long long)arg1 threadPriority:(int)arg2 options:(unsigned long long)arg3 nameCallback:(CDUnknownBlockType)arg4;

@end
