/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVPlayerItem.h>

@class AVEditBehaviorContext, AVMusicAppBehaviorContext;

@interface AVPlayerItem (AVKitAdditionsPrivate)

@property (weak, nonatomic, readonly) AVMusicAppBehaviorContext *avkit_musicAppBehaviorContext;
@property (weak, nonatomic, readonly) AVEditBehaviorContext *avkit_currentEditBehaviorContext;

- (id)avkit_data;
- (id)avkit_dataOrNil;
- (void)avkit_setValue:(id)arg1 forAVKitProperty:(id)arg2;
- (id)avkit_valueForAVKitProperty:(id)arg1;
- (id)externalMetadata;
- (void)setExternalMetadata:(id)arg1;
- (void)avkit_setMusicBehaviorData:(id)arg1;
- (void)avkit_setCurrentEditBehaviorContext:(id)arg1;

@end
