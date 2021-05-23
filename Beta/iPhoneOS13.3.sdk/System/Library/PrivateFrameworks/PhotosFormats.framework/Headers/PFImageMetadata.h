/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@interface PFImageMetadata : NSObject

+ (_Bool)readMetadataType:(unsigned char)arg1 fromCGImageProperties:(id)arg2 value:(id *)arg3 error:(id *)arg4;
+ (_Bool)writeMetadataType:(unsigned char)arg1 value:(id)arg2 toCGImageProperties:(id)arg3 error:(id *)arg4;
+ (_Bool)readMetadataType:(unsigned char)arg1 fromFileURL:(id)arg2 value:(id *)arg3 error:(id *)arg4;
+ (_Bool)queryImagePropertiesOfFileAtURL:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
+ (id)valueFromCGImageProperties:(id)arg1 dictionaryKey:(const void *)arg2 key:(const void *)arg3;
+ (_Bool)readMetadataValueFromImageAtFileURL:(id)arg1 dictionaryKey:(const void *)arg2 key:(const void *)arg3 value:(id *)arg4 error:(id *)arg5;
+ (id)imagePropertiesByRemovingKey:(const void *)arg1 dictionaryKey:(const void *)arg2 fromImageProperties:(id)arg3;

@end
