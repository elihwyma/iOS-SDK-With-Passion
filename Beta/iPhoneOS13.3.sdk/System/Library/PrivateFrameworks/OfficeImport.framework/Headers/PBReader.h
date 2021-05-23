/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCBReader.h>

__attribute__((visibility("hidden")))
@interface PBReader : OCBReader

{
    struct PptObjectFactory *mPptObjectFactory;
    const void *mBuffer;
}

@property (nonatomic, readonly) struct PptBinaryReader *pptReader;

- (void)dealloc;
- (_Bool)start;
- (id)read;
- (id)initWithCancelDelegate:(id)arg1;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;

@end
