/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarConfiguration, AVTAvatarRecord, AVTCoreModel, AVTMemoji, AVTPresetImageProvider, AVTPresetResourceLoader, NSMutableDictionary;

@protocol AVTUILogger;

@interface AVTAvatarAttributeEditorModelManager : NSObject

{
    AVTMemoji *_avatar;
    AVTAvatarRecord *_avatarRecord;
    AVTAvatarConfiguration *_avatarConfiguration;
    AVTCoreModel *_coreModel;
    AVTPresetImageProvider *_imageProvider;
    AVTPresetResourceLoader *_resourceLoader;
    NSMutableDictionary *_cancelationTokens;
    id <AVTUILogger> _logger;
}

@property (retain, nonatomic) NSMutableDictionary *cancelationTokens;
@property (retain, nonatomic) id <AVTUILogger> logger;
@property (nonatomic, readonly) AVTMemoji *avatar;
@property (copy, nonatomic, readonly) AVTAvatarRecord *avatarRecord;
@property (nonatomic, readonly) AVTAvatarConfiguration *avatarConfiguration;
@property (nonatomic, readonly) AVTCoreModel *coreModel;
@property (nonatomic, readonly) AVTPresetImageProvider *imageProvider;
@property (nonatomic, readonly) AVTPresetResourceLoader *resourceLoader;

- (void)dealloc;
- (void)cancelAllPreloading;
- (void)updateAvatarWithAvatarUpdater:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (id)initWithAvatarRecord:(id)arg1 coreModel:(id)arg2 imageProvider:(id)arg3 resourceLoader:(id)arg4 environment:(id)arg5;
- (id)buildUIModelWithCurrentEditorDataSource:(id)arg1 forCategoryAtIndex:(unsigned long long)arg2;
- (id)buildInitialEditorState;
- (void)preloadSectionItem:(id)arg1 atIndexPath:(id)arg2;
- (void)cancelPreloadForSectionItemIndexPath:(id)arg1;
- (void)preLoadCategory:(id)arg1;
- (void)updateAvatarBySelectingSectionItem:(id)arg1 animated:(_Bool)arg2;
- (void)updateAvatarBySelectingHeaderPickerItem:(id)arg1 animated:(_Bool)arg2;

@end
