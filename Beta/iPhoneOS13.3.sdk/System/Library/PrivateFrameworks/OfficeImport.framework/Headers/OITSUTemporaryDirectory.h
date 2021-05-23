/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OITSUTemporaryDirectory : NSObject

{
    NSString *_path;
    _Bool _leak;
}

- (id)init;
- (void)dealloc;
- (id)path;
- (id)URL;
- (id)initWithError:(id *)arg1;
- (void)leakTemporaryDirectory;
- (id)initWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id *)arg3;
- (_Bool)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id *)arg3;
- (id)initWithSignature:(id)arg1 error:(id *)arg2;
- (id)initForWritingToURL:(id)arg1 error:(id *)arg2;

@end
