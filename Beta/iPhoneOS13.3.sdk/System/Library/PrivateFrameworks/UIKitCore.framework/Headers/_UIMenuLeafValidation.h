/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UIValidatableCommand;

__attribute__((visibility("hidden")))
@interface _UIMenuLeafValidation : NSObject

{
    _UIValidatableCommand *_validatedCommand;
}

- (id)init;
- (id)validatedActionForTarget:(id)arg1 action:(id)arg2;
- (id)validatedCommandForTarget:(id)arg1 command:(id)arg2 alternate:(id)arg3;

@end
