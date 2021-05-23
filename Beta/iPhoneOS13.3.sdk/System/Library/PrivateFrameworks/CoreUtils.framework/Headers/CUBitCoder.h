/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSDictionary;

@interface CUBitCoder : NSObject

{
    CDUnknownBlockType _decryptHandler;
    CDUnknownBlockType _encryptHandler;
    NSDictionary *_schema;
}

@property (copy, nonatomic) CDUnknownBlockType decryptHandler;
@property (copy, nonatomic) CDUnknownBlockType encryptHandler;
@property (copy, nonatomic) NSDictionary *schema;

- (void)dealloc;
- (void)invalidate;
- (id)decodeBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)decodeBytes:(const void *)arg1 length:(unsigned long long)arg2 info:(id)arg3 error:(id *)arg4;
- (id)decodeData:(id)arg1 error:(id *)arg2;
- (id)decodeData:(id)arg1 info:(id)arg2 error:(id *)arg3;
- (id)encodeFields:(id)arg1 variantIdentifier:(id)arg2 error:(id *)arg3;
- (id)encodeFields:(id)arg1 variantIdentifier:(id)arg2 info:(id)arg3 error:(id *)arg4;
- (unsigned long long)_readValue:(struct __CFBitVector *)arg1 bitCount:(unsigned int)arg2 bitIndex:(unsigned int *)arg3 err:(int *)arg4;
- (void)_writeValue:(unsigned long long)arg1 bitCount:(unsigned int)arg2 bitVector:(struct __CFBitVector *)arg3;

@end
