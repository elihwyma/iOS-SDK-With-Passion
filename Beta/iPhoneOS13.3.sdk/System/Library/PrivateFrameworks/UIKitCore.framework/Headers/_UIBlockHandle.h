/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIBlockHandle : NSObject

{
    CDUnknownBlockType _block;
}

@property (nonatomic, readonly) CDUnknownBlockType block;

- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
