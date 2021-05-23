/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class MPAVController, MPAVItem, SKUIMediaPlayerItemStatus;

__attribute__((visibility("hidden")))
@interface SKUIMediaPlayer : NSObject

{
    _Bool _playing;
    float _rate;
    SKUIMediaPlayerItemStatus *_playerItem;
    MPAVController *_player;
    MPAVItem *_currentItem;
    id _periodicTimeObserver;
}

@property (retain, nonatomic) SKUIMediaPlayerItemStatus *playerItem;
@property (weak, nonatomic) MPAVController *player;
@property (weak, nonatomic) MPAVItem *currentItem;
@property (nonatomic) float rate;
@property (retain, nonatomic) id periodicTimeObserver;
@property (nonatomic) _Bool playing;

@end
