/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/VMUAbstractSerializer.h>

__attribute__((visibility("hidden")))
@interface VMUSimpleSerializer : VMUAbstractSerializer

{
    void *_map;
    unsigned int _internCursor;
}

- (id)init;
- (void)dealloc;
- (unsigned int)serializeString:(id)arg1;
- (void)serialize32:(unsigned int)arg1;
- (void)serialize64:(unsigned long long)arg1;
- (id)copyContiguousData;
- (unsigned int)serializeNullTerminatedBytes:(const char *)arg1;
- (void)_serializeValues:(unsigned int *)arg1 count:(unsigned int)arg2;

@end
