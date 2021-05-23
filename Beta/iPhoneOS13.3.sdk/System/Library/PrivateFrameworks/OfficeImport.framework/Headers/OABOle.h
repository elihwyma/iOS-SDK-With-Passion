/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABOle : NSObject

+ (id)stringForCLSID:(struct _SsrwOO_GUID)arg1;
+ (_Bool)isBiffCLSID:(id)arg1;
+ (id)readCLSIDFromStream:(struct SsrwOOStream *)arg1;
+ (id)readAnsiStringFromStream:(struct SsrwOOStream *)arg1;
+ (id)read4ByteFromStream:(struct SsrwOOStream *)arg1;
+ (id)readUnicodeStringFromStream:(struct SsrwOOStream *)arg1;
+ (_Bool)readSharedInfoFor:(id)arg1 fromStorage:(struct SsrwOOStorage *)arg2;
+ (id)readFromData:(id)arg1 cancel:(id)arg2;
+ (_Bool)isChart:(id)arg1;
+ (id)readFromFileName:(id)arg1 cancel:(id)arg2;
+ (id)readFromParentStorage:(struct SsrwOOStorage *)arg1 storageName:(id)arg2 cancel:(id)arg3;
+ (id)readCompressedFromStream:(struct SsrwOOStream *)arg1 compressedSize:(unsigned int)arg2 uncompressedSize:(unsigned int)arg3 cancel:(id)arg4;
+ (id)readFromStream:(struct SsrwOOStream *)arg1 size:(unsigned int)arg2 cancel:(id)arg3;

@end
