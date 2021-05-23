/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@interface PASampleWaitInfo : NSObject

{
    unsigned long long _owner;
    unsigned long long _context;
    unsigned long long _wait_type;
}

@property (readonly) unsigned long long owner;
@property (readonly) unsigned long long context;
@property (readonly) unsigned long long wait_type;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)waitInfoWithStackshotWaitInfo:(const struct stackshot_thread_waitinfo *)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)_initWithSerializedWaitInfo:(const CDStruct_33dcf794 *)arg1;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(struct NSMutableDictionary *)arg2 andDataBufferDictionary:(struct NSMutableDictionary *)arg3;
- (id)descriptionForPid:(int)arg1 andTid:(unsigned long long)arg2 withOptions:(unsigned long long)arg3 andNameCallback:(CDUnknownBlockType)arg4;
- (id)initWithStackshotWaitInfo:(const struct stackshot_thread_waitinfo *)arg1;
- (_Bool)matchesStackshotWaitInfo:(const struct stackshot_thread_waitinfo *)arg1;

@end
