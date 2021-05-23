/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/STSStgObject.h>

__attribute__((visibility("hidden")))
@interface STStream : STSStgObject

{
    struct _Stream *m_pCStream;
}

@property (nonatomic, readonly) struct _Stream *cStream;

- (void)dealloc;
- (void)close;
- (id)readBytes:(unsigned int)arg1;
- (void)setClass:(CDStruct_214f2dba)arg1;
- (unsigned long long)readUInt64;
- (unsigned int)readUInt32;
- (int)readSInt32;
- (id)initWithCStream:(struct _Stream *)arg1;
- (id)getInfo;
- (void)releaseCStream;
- (void)seek:(int)arg1 fromOrigin:(int)arg2;
- (unsigned int)getPos;
- (BOOL)readChar8;
- (unsigned char)readUInt8;
- (unsigned char)readBool8;
- (short)readSInt16;
- (unsigned short)readUInt16;
- (float)readFloat32;
- (double)readFloat64;
- (unsigned short)readChar16;
- (id)readString16:(unsigned int)arg1;
- (void)writeBytes:(id)arg1;
- (void)writeUInt8:(unsigned char)arg1;
- (void)writeChar8:(BOOL)arg1;
- (void)writeBool8:(unsigned char)arg1;
- (void)writeSInt16:(short)arg1;
- (void)writeUInt16:(unsigned short)arg1;
- (void)writeSInt32:(int)arg1;
- (void)writeUInt32:(unsigned int)arg1;
- (void)writeFloat32:(float)arg1;
- (void)writeFloat64:(double)arg1;
- (void)writeChar16:(unsigned short)arg1;
- (void)writeString16:(id)arg1;
- (void)writeString16NoTerminator:(id)arg1;

@end
