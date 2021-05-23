/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTColorPreset, AVTCoreModelColor, NSString;

@interface AVTAvatarAttributeEditorSectionColorItem : NSObject

{
    _Bool _selected;
    NSString *_localizedName;
    CDUnknownBlockType _avatarUpdater;
    CDUnknownBlockType _layerContentProvider;
    CDUnknownBlockType _gradientProvider;
    AVTCoreModelColor *_color;
    AVTColorPreset *_skinColor;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType layerContentProvider;
@property (copy, nonatomic, readonly) CDUnknownBlockType gradientProvider;
@property (nonatomic, readonly) AVTCoreModelColor *color;
@property (nonatomic, readonly) AVTColorPreset *skinColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (copy, nonatomic, readonly) CDUnknownBlockType avatarUpdater;
@property (nonatomic, getter=isSelected) _Bool selected;

- (id)initWithColor:(id)arg1 skinColor:(id)arg2 imageProvider:(id)arg3 avatarUpdater:(CDUnknownBlockType)arg4 selected:(_Bool)arg5;
- (id)initWithColor:(id)arg1 imageProvider:(id)arg2 avatarUpdater:(CDUnknownBlockType)arg3 selected:(_Bool)arg4;

@end
