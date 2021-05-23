/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@interface AVTAvatarActionButtonBlockHandler : NSObject

{
    CDUnknownBlockType _actionBlock;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType actionBlock;

- (void)performAction;
- (id)initWithActionBlock:(CDUnknownBlockType)arg1;

@end
