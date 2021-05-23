/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@interface _UIStatusBarAction : NSObject

{
    _Bool _enabled;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (id)actionWithBlock:(CDUnknownBlockType)arg1;

- (void)performWithStatusBar:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
