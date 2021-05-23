/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTUIEnvironment, AVTUIStickerPlaceholderProviderFactory, AVTUIStickerRenderer, NSArray;

@protocol AVTAvatarRecord, AVTTaskScheduler;

@interface AVTStickerSheetModel : NSObject

{
    id <AVTAvatarRecord> _avatarRecord;
    id <AVTTaskScheduler> _taskScheduler;
    AVTUIStickerRenderer *_stickerRenderer;
    AVTUIEnvironment *_environment;
    AVTUIStickerPlaceholderProviderFactory *_placeholderProviderFactory;
    NSArray *_stickerItems;
}

@property (nonatomic, readonly) id <AVTAvatarRecord> avatarRecord;
@property (nonatomic, readonly) id <AVTTaskScheduler> taskScheduler;
@property (nonatomic, readonly) AVTUIStickerRenderer *stickerRenderer;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) AVTUIStickerPlaceholderProviderFactory *placeholderProviderFactory;
@property (copy, nonatomic, readonly) NSArray *stickerItems;

+ (id)sheetModelForAvatarRecord:(id)arg1 withConfigurations:(id)arg2 cache:(id)arg3 taskScheduler:(id)arg4 renderingQueue:(id)arg5 encodingQueue:(id)arg6 stickerGeneratorPool:(id)arg7 imageProvider:(id)arg8 environment:(id)arg9;

- (id)initWithAvatarRecord:(id)arg1 stickerItems:(id)arg2 stickerRenderer:(id)arg3 taskScheduler:(id)arg4 placeholderProviderFactory:(id)arg5 environment:(id)arg6;

@end
