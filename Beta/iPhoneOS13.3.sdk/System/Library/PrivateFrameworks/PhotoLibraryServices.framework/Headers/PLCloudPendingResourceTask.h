/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class CPLResourceTransferTask, NSDate, NSMutableDictionary;

@interface PLCloudPendingResourceTask : NSObject

{
    CPLResourceTransferTask *_transferTask;
    NSDate *_lastUpdated;
    _Bool _completed;
    _Bool _transferTaskRemoved;
    NSMutableDictionary *_taskIdentifierToProgressBlock;
    NSMutableDictionary *_taskIdentifierToCompletionHandler;
}

- (void)cancelTaskWithIdentifier:(id)arg1;
- (void)reportProgress:(float)arg1;
- (void)keepAlive;
- (id)lastUpdated;
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 forTaskIdentifier:(id)arg3;
- (void)setTransferTask:(id)arg1;
- (void)addProgressBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 withTaskIdentifier:(id)arg3;
- (void)reportCompletionWithError:(id)arg1;
- (id)taskIDs;

@end
