/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIWeakHelper : NSObject

{
    CDUnknownBlockType _deallocationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType deallocationBlock;

- (void)dealloc;
- (id)initWithDeallocationBlock:(CDUnknownBlockType)arg1;

@end
