/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@class NSString;

@protocol AVTAvatarAttributeEditorHeaderPickerItem <Swift>

@property (copy, nonatomic, readonly) NSString *localizedName;
@property (copy, nonatomic, readonly) CDUnknownBlockType avatarUpdater;
@property (copy, nonatomic, readonly) CDUnknownBlockType editorUpdater;
@property (nonatomic, getter=isSelected) _Bool selected;

@end
