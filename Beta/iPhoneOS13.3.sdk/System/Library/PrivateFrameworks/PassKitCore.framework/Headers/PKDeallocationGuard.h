/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@interface PKDeallocationGuard : NSObject

{
    CDUnknownBlockType _block;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
