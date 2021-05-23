/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface OKDocumentsManager : NSObject

{
    NSObject<OS_dispatch_queue> *_documentsAccessQueue;
}

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performAsynchronousFileAccessUsingBlock:(CDUnknownBlockType)arg1;
- (id)documentsDirectoryURL;
- (void)_performAsynchronousFileAccessUsingBlock:(CDUnknownBlockType)arg1;
- (id)localDocumentsDirectoryURL;
- (id)documentURLsAtDirectoryURL:(id)arg1 error:(id *)arg2;
- (id)uniqueFileURLForFileName:(id)arg1 inDirectoryURL:(id)arg2 error:(id *)arg3;
- (id)importFileURL:(id)arg1 toDirectoryURL:(id)arg2 copy:(_Bool)arg3 error:(id *)arg4;
- (id)documentURLs:(id *)arg1;
- (id)uniqueFileURLForFileName:(id)arg1 error:(id *)arg2;
- (id)importFileURL:(id)arg1 error:(id *)arg2;
- (id)importFileURL:(id)arg1 toDirectoryURL:(id)arg2 error:(id *)arg3;
- (id)duplicateFileURL:(id)arg1 error:(id *)arg2;
- (id)duplicateFileURL:(id)arg1 toDirectoryURL:(id)arg2 error:(id *)arg3;
- (id)renameFileURL:(id)arg1 toFileName:(id)arg2 error:(id *)arg3;
- (_Bool)deleteFileURL:(id)arg1 error:(id *)arg2;

@end
