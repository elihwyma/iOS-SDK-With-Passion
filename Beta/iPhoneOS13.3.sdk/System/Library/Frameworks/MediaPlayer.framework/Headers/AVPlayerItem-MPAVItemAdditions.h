/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <AVFoundation/AVPlayerItem.h>

@class MPAVItem, MPQueuePlayer;

@interface AVPlayerItem (MPAVItemAdditions)

@property (retain, nonatomic) MPAVItem *MPAVItem;
@property (weak, nonatomic) MPQueuePlayer *MP_associatedQueuePlayer;

- (id)MP_shortDescription;
- (id)createLanguageOptions;

@end
