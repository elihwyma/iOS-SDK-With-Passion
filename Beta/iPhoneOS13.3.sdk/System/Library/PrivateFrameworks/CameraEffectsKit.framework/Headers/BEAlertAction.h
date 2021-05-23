/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIAlertAction.h>

@interface BEAlertAction : UIAlertAction

{
    long long _tag;
    CDUnknownBlockType _actionHandler;
}

@property (nonatomic) long long tag;
@property (copy, nonatomic) CDUnknownBlockType actionHandler;

- (id)initWithTitle:(id)arg1 style:(long long)arg2 tag:(long long)arg3 action:(CDUnknownBlockType)arg4;
- (void)doActionHandler;

@end
