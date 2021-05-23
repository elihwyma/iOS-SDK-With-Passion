/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@interface AVTStickerRecentsPresetsProvider : NSObject

+ (void)filteredAndPaddedStickerRecordsWithRecents:(id)arg1 paddingMemojiIdentifier:(id)arg2 avatarStore:(id)arg3 numberOfStickers:(long long)arg4 resultBlock:(CDUnknownBlockType)arg5;
+ (id)paddedStickerRecordsWithRecents:(id)arg1 paddingMemojiIdentifier:(id)arg2 numberOfStickers:(long long)arg3;
+ (id)filteredRecentStickers:(id)arg1 withAvailableRecordIdentifiersMap:(id)arg2;
+ (id)presetsGivenOneMemojiWithIdentifier:(id)arg1;
+ (id)presetsGivenNoMemoji;

@end
