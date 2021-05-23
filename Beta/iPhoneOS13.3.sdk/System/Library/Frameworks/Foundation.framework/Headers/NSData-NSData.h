/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSData.h>

@interface NSData (NSData)

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)dataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)data;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)_newZeroingDataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (_Bool)_base64DecodingAlwaysSucceedsForOptions:(unsigned long long)arg1;
+ (id)_alloc;
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;
+ (id)dataWithData:(id)arg1;
+ (id)_newZeroingDataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 freeWhenDone:(_Bool)arg4 bytesAreVM:(_Bool)arg5;
- (const void *)bytes;
- (_Bool)_isCompact;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (id)_createDispatchData;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (unsigned long long)_cfTypeID;
- (_Bool)_providesConcreteBacking;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (_Bool)isNSData__;
- (id)replacementObjectForPortCoder:(id)arg1;
- (_Bool)_copyWillRetain;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (id)replacementObjectForCoder:(id)arg1;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_isDispatchData;
- (_Bool)isEqualToData:(id)arg1;
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_canReplaceWithDispatchDataForXPCCoder;
- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;
- (struct _NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (_Bool)_decodeBase64EncodedCharacterBuffer:(const char *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 buffer:(char *)arg4 bufferLength:(unsigned long long)arg5 state:(CDStruct_6243051c *)arg6;
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned long long)arg2;
- (id)_base64EncodingAsString:(_Bool)arg1 withOptions:(unsigned long long)arg2;
- (id)_asciiDescription;
- (_Bool)_allowsDirectEncoding;
- (void)getBytes:(void *)arg1;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2 error:(id *)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2;
- (id)base64EncodedStringWithOptions:(unsigned long long)arg1;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2;
- (id)base64EncodedDataWithOptions:(unsigned long long)arg1;
- (id)initWithBase64Encoding:(id)arg1;
- (id)base64Encoding;
- (id)_dataWithCompressionOperation:(int)arg1 algorithm:(long long)arg2;
- (id)decompressedDataUsingAlgorithm:(long long)arg1 error:(id *)arg2;
- (id)compressedDataUsingAlgorithm:(long long)arg1 error:(id *)arg2;
- (id)_web_guessedMIMETypeForXML;
- (id)_web_guessedMIMEType;
- (id)_web_guessedMIMETypeForExtension:(id)arg1;
- (id)_web_parseRFC822HeaderFields;
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;

@end
