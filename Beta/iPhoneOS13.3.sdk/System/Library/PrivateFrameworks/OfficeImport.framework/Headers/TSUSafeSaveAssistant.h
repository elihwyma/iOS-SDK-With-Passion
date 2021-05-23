/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSURL, OITSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface TSUSafeSaveAssistant : NSObject

{
    NSURL *_saveURL;
    OITSUTemporaryDirectory *_temporaryDirectory;
    NSURL *_writeURL;
}

@property (nonatomic, readonly) NSURL *writeURL;

+ (void)writeAttributes:(id)arg1 toURL:(id)arg2;
+ (_Bool)finishWritingToURL:(id)arg1 byMovingOrCopyingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id *)arg4;

- (id)init;
- (_Bool)endSaveWithSuccess:(_Bool)arg1 toURL:(id)arg2 addingAttributes:(id)arg3 error:(id *)arg4;
- (id)initForSavingToURL:(id)arg1 error:(id *)arg2;
- (_Bool)endSaveWithSuccess:(_Bool)arg1 addingAttributes:(id)arg2 error:(id *)arg3;

@end
