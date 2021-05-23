/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@interface IDSSessionInfoMetadataSerializer : NSObject

+ (id)serializeSessionInfoMetadata:(id)arg1;
+ (void)_writeStringToByteBuffer:(id)arg1 buffer:(CDStruct_457e09f6 *)arg2;
+ (void)_writeNumberToByteBuffer:(id)arg1 buffer:(CDStruct_457e09f6 *)arg2;
+ (void)_writeDictionaryToByteBuffer:(id)arg1 buffer:(CDStruct_457e09f6 *)arg2;
+ (void)_writeArrayToByteBuffer:(id)arg1 buffer:(CDStruct_457e09f6 *)arg2;
+ (id)_readArrayFromByteArray:(char *)arg1 byteBuffer:(CDStruct_457e09f6 *)arg2;
+ (id)_readDictionaryFromByteArray:(char *)arg1 byteBuffer:(CDStruct_457e09f6 *)arg2;
+ (id)deserializeSessionInfoMetadata:(id)arg1;

@end
