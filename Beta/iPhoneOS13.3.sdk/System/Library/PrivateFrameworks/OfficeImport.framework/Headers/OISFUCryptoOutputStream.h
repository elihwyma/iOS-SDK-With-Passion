/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, OISFUCryptor;

@protocol SFUOutputStream;

__attribute__((visibility("hidden")))
@interface OISFUCryptoOutputStream : NSObject

{
    id <SFUOutputStream> mBaseStream;
    OISFUCryptor *mCryptor;
    _Bool mIsClosed;
    _Bool mComputeCrc32;
    unsigned int mCrc32;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)arg1 key:(id)arg2;

- (void)dealloc;
- (void)close;
- (long long)offset;
- (id)inputStream;
- (unsigned int)crc32;
- (_Bool)canSeek;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (id)closeLocalStream;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(_Bool)arg3;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (_Bool)canCreateInputStream;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2;

@end
