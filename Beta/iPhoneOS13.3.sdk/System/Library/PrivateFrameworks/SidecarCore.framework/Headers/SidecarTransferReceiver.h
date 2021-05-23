/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <SidecarCore/SidecarTransfer.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SidecarTransferReceiver : SidecarTransfer

{
    NSMutableDictionary *_groups;
    NSMutableArray *_orderedGroups;
}

- (void)handleMessage:(id)arg1;
- (id)initWithSession:(id)arg1 requestID:(long long)arg2;
- (CDUnknownBlockType)_resumeMessage:(id)arg1;

@end
