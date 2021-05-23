/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFFile.h>

#import <PhotoFoundation/Swift-Protocol.h>

@class NSError, NSString;

@interface PFFileIStream : PFFile <Swift>

{
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_file;
    char *_buffer;
    unsigned long long _bufferLength;
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)lock;
- (void)unlock;
- (void)setError:(id)arg1;
- (_Bool)openStream;
- (void)closeStream;
- (long long)streamLength;
- (long long)streamPosition;
- (_Bool)rewindStream;
- (_Bool)rewindStream:(long long)arg1;
- (_Bool)advanceStream;
- (_Bool)advanceStream:(long long)arg1 distanceMoved:(long long *)arg2;
- (id)getStreamError;
- (unsigned long long)preferredStreamBlockSize;
- (const char *)streamData:(unsigned long long *)arg1;
- (void)updateError;
- (_Bool)createDirectoryIfNecessary;
- (_Bool)readStream:(char *)arg1 length:(unsigned long long)arg2 read:(unsigned long long *)arg3;
- (id)initWithFile:(id)arg1;

@end
