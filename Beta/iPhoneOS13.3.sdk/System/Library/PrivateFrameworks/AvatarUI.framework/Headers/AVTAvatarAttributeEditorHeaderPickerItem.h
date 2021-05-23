/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVTAvatarAttributeEditorHeaderPickerItem : NSObject

{
    _Bool _selected;
    NSString *_localizedName;
    CDUnknownBlockType _avatarUpdater;
    CDUnknownBlockType _editorUpdater;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (copy, nonatomic, readonly) CDUnknownBlockType avatarUpdater;
@property (copy, nonatomic, readonly) CDUnknownBlockType editorUpdater;
@property (nonatomic, getter=isSelected) _Bool selected;

- (id)initWithLocalizedName:(id)arg1 avatarUpdater:(CDUnknownBlockType)arg2 editorUpdater:(CDUnknownBlockType)arg3 selected:(_Bool)arg4;

@end
