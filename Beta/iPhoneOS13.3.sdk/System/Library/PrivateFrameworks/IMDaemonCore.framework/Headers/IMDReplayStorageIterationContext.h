/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class IDSKVDeleteContext;

@interface IMDReplayStorageIterationContext : NSObject

{
    IDSKVDeleteContext *_deleteContext;
}

@property (retain, nonatomic) IDSKVDeleteContext *deleteContext;

- (void)dealloc;

@end
