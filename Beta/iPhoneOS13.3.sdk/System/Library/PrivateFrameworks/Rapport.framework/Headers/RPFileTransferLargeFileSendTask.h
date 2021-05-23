/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class RPFileTransferItem;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RPFileTransferLargeFileSendTask : NSObject

{
    _Bool _failed;
    int _fileFD;
    int _outstandingSends;
    unsigned long long _remainingSize;
    unsigned int _sentFlags;
    struct CC_SHA256state_st _sha256Ctx;
    unsigned int _xid;
    _Bool _needsRetry;
    RPFileTransferItem *_fileItem;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _taskID;
}

@property (nonatomic) int fileFD;
@property (retain, nonatomic) RPFileTransferItem *fileItem;
@property (nonatomic) _Bool needsRetry;
@property (nonatomic) int outstandingSends;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long remainingSize;
@property (nonatomic) unsigned long long taskID;

@end
