/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SAPAStyleTaskPrivateData : NSObject

{
    int _suspend_count;
    int _faults;
    int _pageins;
    int _cow_faults;
    unsigned int _latency_qos;
    unsigned long long _task_size_bytes;
    unsigned long long _ss_flags;
    unsigned long long _terminatedThreadsUserTimeInNs;
    unsigned long long _terminatedThreadsSystemTimeInNs;
    unsigned long long _terminatedThreadsInstructions;
    unsigned long long _terminatedThreadsCycles;
}

@property unsigned long long task_size_bytes;
@property unsigned long long ss_flags;
@property int suspend_count;
@property int faults;
@property int pageins;
@property int cow_faults;
@property unsigned int latency_qos;
@property unsigned long long terminatedThreadsUserTimeInNs;
@property unsigned long long terminatedThreadsSystemTimeInNs;
@property unsigned long long terminatedThreadsInstructions;
@property unsigned long long terminatedThreadsCycles;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_4050d507 *)arg1 bufferLength:(unsigned long long)arg2;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (_Bool)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (void)populateReferencesUsingBuffer:(const void *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;

@end
