/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIKeyCommand.h>

@interface WFBlockKeyCommand : UIKeyCommand

{
    CDUnknownBlockType _block;
}

@property (nonatomic, readonly) CDUnknownBlockType block;

+ (id)commandWithTitle:(id)arg1 input:(id)arg2 modifierFlags:(long long)arg3 block:(CDUnknownBlockType)arg4;

@end
