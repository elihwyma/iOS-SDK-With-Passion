/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIViewBlockBasedCAAction : NSObject

{
    CDUnknownBlockType _block;
}

- (id)initWithActionBlock:(CDUnknownBlockType)arg1;
- (id)initWithEmptyBlock:(CDUnknownBlockType)arg1;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;

@end
