/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class NSString, UIImage;

@interface AVTAvatarAttributeEditorSectionItem : NSObject <Swift>

{
    _Bool _selected;
    NSString *_localizedName;
    CDUnknownBlockType _avatarUpdater;
    CDUnknownBlockType discardableContentHandler;
    NSString *_identifier;
    UIImage *_cachedThumbnail;
    double _heightRatio;
    CDUnknownBlockType _thumbnailProvider;
    CDUnknownBlockType _presetResourcesProvider;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic) UIImage *cachedThumbnail;
@property (nonatomic, readonly) double heightRatio;
@property (copy, nonatomic, readonly) CDUnknownBlockType thumbnailProvider;
@property (copy, nonatomic, readonly) CDUnknownBlockType presetResourcesProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (copy, nonatomic, readonly) CDUnknownBlockType avatarUpdater;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (copy, nonatomic) CDUnknownBlockType discardableContentHandler;
@property (copy, nonatomic, readonly) NSString *prefetchingIdentifier;

- (void)discardContent;
- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 thumbnailProvider:(CDUnknownBlockType)arg3 presetResourcesProvider:(CDUnknownBlockType)arg4 avatarUpdater:(CDUnknownBlockType)arg5 heightRatio:(double)arg6 selected:(_Bool)arg7;

@end
