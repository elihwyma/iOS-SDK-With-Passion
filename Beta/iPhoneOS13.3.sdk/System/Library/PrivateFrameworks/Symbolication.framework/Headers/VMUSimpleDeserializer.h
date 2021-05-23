/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/VMUAbstractSerializer.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VMUSimpleDeserializer : VMUAbstractSerializer

{
    void *_cache;
    NSData *_data;
}

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (unsigned int)deserialize32;
- (unsigned long long)deserialize64;
- (id)copyDeserializedString;
- (id)copyDeserializedStringWithID:(unsigned int)arg1;
- (void)skipFields:(unsigned int)arg1;
- (const char *)copyDeserializedNullTerminatedBytes;
- (unsigned int *)_deserializeValues:(unsigned int)arg1;

@end
