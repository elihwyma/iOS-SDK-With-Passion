/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSOperation.h>

@class MiroAutoEditController, MiroAutoEditor, MiroCloudDownloader, MiroMemory;

__attribute__((visibility("hidden")))
@interface MiroAutoEditOperation : NSOperation

{
    _Bool _isFinished;
    _Bool _isExecuting;
    _Bool _shouldSave;
    int _requestID;
    MiroAutoEditor *_autoEditorParent;
    MiroMemory *_memory;
    CDUnknownBlockType _cleanupHandler;
    MiroCloudDownloader *_cloudDownloader;
    MiroAutoEditController *_autoEditController;
}

@property (retain, nonatomic) MiroCloudDownloader *cloudDownloader;
@property (retain) MiroAutoEditController *autoEditController;
@property (nonatomic) int requestID;
@property (retain) MiroAutoEditor *autoEditorParent;
@property (retain) MiroMemory *memory;
@property (copy) CDUnknownBlockType cleanupHandler;
@property _Bool shouldSave;

- (void)start;
- (void)finished;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (_Bool)shouldCancelOnNonLocalAssets;
- (_Bool)shouldDownload;
- (void)performAutoEditAsynchronously;
- (void)_downloadWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
