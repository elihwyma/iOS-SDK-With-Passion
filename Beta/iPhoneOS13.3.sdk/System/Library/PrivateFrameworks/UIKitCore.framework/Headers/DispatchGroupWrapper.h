/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface DispatchGroupWrapper : NSObject

{
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

@property (nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;

- (id)init;
- (void)dealloc;
- (void)executeWithDispatchGroup:(CDUnknownBlockType)arg1;
- (void)notify:(CDUnknownBlockType)arg1;

@end
