/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCCEncryptor : NSObject

{
    NSString *mOutputFilename;
    struct OCCStreamer *mStreamer;
}

@property (nonatomic, readonly) NSString *outputFilename;

+ (id)allocTempFileWithBase:(id)arg1 filename:(id *)arg2;

- (void)dealloc;
- (id)initWithStreamer:(struct OCCStreamer *)arg1;
- (_Bool)encryptIntoOutputFile;
- (_Bool)encrypt;

@end
