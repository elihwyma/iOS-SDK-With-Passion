/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _DKSyncContext;

@interface _DKSyncContextObject : NSObject

{
    _DKSyncContext *_context;
}

@property (nonatomic, readonly) _DKSyncContext *context;

+ (id)new;

- (id)init;
- (id)initWithContext:(id)arg1;

@end
