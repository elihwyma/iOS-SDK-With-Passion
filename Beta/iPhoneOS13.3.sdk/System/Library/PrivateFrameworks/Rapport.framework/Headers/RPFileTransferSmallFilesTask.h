/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RPFileTransferSmallFilesTask : NSObject

{
    _Bool _needsRetry;
    struct NSMutableArray *_fileItems;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _taskID;
}

@property (retain, nonatomic) NSMutableArray *fileItems;
@property (nonatomic) _Bool needsRetry;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long taskID;

@end
