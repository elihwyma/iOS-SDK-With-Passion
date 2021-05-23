/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIKBRTObject : NSObject

{
    NSMutableArray *_owner;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

- (void)setOwner:(id)arg1;
- (id)owner;
- (id)previousEntry;
- (id)nextEntry;

@end
