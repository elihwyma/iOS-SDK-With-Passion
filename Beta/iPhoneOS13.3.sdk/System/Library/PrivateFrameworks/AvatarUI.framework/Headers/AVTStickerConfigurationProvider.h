/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTUIEnvironment, NSCache;

@interface AVTStickerConfigurationProvider : NSObject

{
    NSCache *_stickerConfigurationCache;
    AVTUIEnvironment *_environment;
}

@property (retain, nonatomic) NSCache *stickerConfigurationCache;
@property (retain, nonatomic) AVTUIEnvironment *environment;

- (id)initWithEnvironment:(id)arg1;
- (id)stickerConfigurationForAvatarRecord:(id)arg1 stickerName:(id)arg2;
- (id)stickerConfigurationsForAvatarRecord:(id)arg1;

@end
