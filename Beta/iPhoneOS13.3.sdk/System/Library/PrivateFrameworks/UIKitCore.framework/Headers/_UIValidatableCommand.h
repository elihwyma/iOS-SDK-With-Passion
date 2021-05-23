/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICommand.h>

@class UICommandAlternate;

__attribute__((visibility("hidden")))
@interface _UIValidatableCommand : UICommand

{
    UICommand *_command;
    UICommandAlternate *_alternate;
}

- (id)init;
- (id)propertyList;
- (SEL)action;
- (void)useCommand:(id)arg1 alternate:(id)arg2;
- (id)alternates;

@end
