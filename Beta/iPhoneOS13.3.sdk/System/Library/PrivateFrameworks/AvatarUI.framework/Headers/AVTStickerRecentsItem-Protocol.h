/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@class NSString, NSURL, UIImage;

@protocol AVTStickerRecentsItem <Swift>

@property (copy, nonatomic, readonly) NSString *localizedDescription;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic, readonly) CDUnknownBlockType provider;

- (unsigned short)cellIdentifier;

@end
