/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, OITSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface OCCDecryptor : NSObject

{
    OITSUTemporaryDirectory *mTempDirectory;
    NSString *mOutputFilename;
    NSString *mBaseStringForOutputFilename;
    struct OCCStreamer *mStreamer;
}

@property (nonatomic, readonly) NSString *outputFilename;

+ (id)allocTempFileWithBase:(id)arg1 outFilename:(id *)arg2 tempDirectory:(id *)arg3;
+ (id)agileDescriptorNamespace;
+ (id)agilePasswordKeyEncryptorNamespace;

- (void)dealloc;
- (_Bool)decrypt;
- (_Bool)isReadProtectedUsingDefaultPassphrase;
- (_Bool)verifyPassphrase:(id)arg1;
- (void)deleteOutputFile;
- (_Bool)decryptIntoOutputFile;
- (id)initWithStreamer:(struct OCCStreamer *)arg1;

@end
