/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class RPFileTransferItem;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RPFileTransferLargeFileReceiveTask : NSObject

{
    int _fileFD;
    struct CC_SHA256state_st _sha256Ctx;
    RPFileTransferItem *_fileItem;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _taskID;
}

@property (nonatomic) int fileFD;
@property (retain, nonatomic) RPFileTransferItem *fileItem;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long taskID;

@end
