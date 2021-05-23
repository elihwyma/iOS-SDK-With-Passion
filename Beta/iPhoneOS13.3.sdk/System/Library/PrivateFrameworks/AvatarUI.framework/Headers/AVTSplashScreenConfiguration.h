/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVPlayerItem, NSString;

@interface AVTSplashScreenConfiguration : NSObject

{
    AVPlayerItem *_primaryPlayerItem;
    AVPlayerItem *_secondaryPlayerItem;
    NSString *_titleString;
    NSString *_subTitleString;
    NSString *_buttonString;
}

@property (retain, nonatomic) AVPlayerItem *primaryPlayerItem;
@property (retain, nonatomic) AVPlayerItem *secondaryPlayerItem;
@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSString *subTitleString;
@property (retain, nonatomic) NSString *buttonString;

@end
