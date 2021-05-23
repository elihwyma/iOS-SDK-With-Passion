/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface _CDSerializableKeyedData : NSObject

{
    NSData *_encodedKey;
    unsigned char _keyChecksum;
    unsigned char _dataChecksum;
    _Bool _dataChecksumNeedsUpdate;
    NSString *_key;
    NSData *_data;
}

@property (readonly) NSString *key;
@property (readonly) NSData *data;

+ (id)log;
+ (id)keyedDataDeserializedFrom:(void *)arg1 maxSize:(unsigned long long)arg2;
+ (id)errorForInvalidKeyEncoding;
+ (unsigned char)byteChecksumOfData:(id)arg1;
+ (id)dataDeseralizedFrom:(void *)arg1 maxSize:(unsigned long long)arg2 checksum:(char *)arg3 bytesRead:(unsigned long long *)arg4;

- (_Bool)isEqual:(id)arg1;
- (_Bool)setData:(id)arg1;
- (unsigned long long)sizeWhenSerialized;
- (unsigned long long)serializeTo:(void *)arg1 maxSize:(unsigned long long)arg2;
- (id)initWithKey:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (unsigned long long)serializeData:(id)arg1 withChecksum:(unsigned char)arg2 to:(void *)arg3;

@end
