/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@protocol AVTAvatarPickerDelegate;

@protocol AVTAvatarPicker <Swift>

@property (weak, nonatomic) id <AVTAvatarPickerDelegate> avatarPickerDelegate;

- (unsigned short)selectAvatarRecordWithIdentifier:animated: /* Error: Ran out of types for this method. */;

@end
