/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, UIImage;

@interface AVTStickerRecentsStickerItem : NSObject

{
    UIImage *_image;
    NSString *_localizedDescription;
    CDUnknownBlockType _provider;
    NSURL *_url;
    CDUnknownBlockType discardableContentHandler;
    NSString *_avatarIdentifier;
    NSString *_stickerName;
}

@property (copy, nonatomic, readonly) NSString *avatarIdentifier;
@property (copy, nonatomic, readonly) NSString *stickerName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType discardableContentHandler;
@property (copy, nonatomic, readonly) NSString *localizedDescription;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic, readonly) CDUnknownBlockType provider;

- (id)cellIdentifier;
- (void)discardContent;
- (id)initWithAvatarIdentifier:(id)arg1 stickerName:(id)arg2 localizedName:(id)arg3 stickerProvider:(CDUnknownBlockType)arg4;

@end
