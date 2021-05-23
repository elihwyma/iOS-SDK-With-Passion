/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCBReader.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EBReader : OCBReader

{
    NSString *mTemporaryDirectory;
    struct XlObjectFactory *mXlObjectFactory;
    _Bool mUseStringOptimization;
    _Bool mIsFileStructuredStorage;
    const void *mBuffer;
}

@property (retain, nonatomic) NSString *temporaryDirectory;
@property (nonatomic, readonly) struct XlBinaryReader *xlReader;
@property (nonatomic) _Bool useStringOptimization;
@property (nonatomic) _Bool isFileStructuredStorage;

- (void)dealloc;
- (_Bool)start;
- (id)read;
- (id)initWithCancelDelegate:(id)arg1;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;

@end
