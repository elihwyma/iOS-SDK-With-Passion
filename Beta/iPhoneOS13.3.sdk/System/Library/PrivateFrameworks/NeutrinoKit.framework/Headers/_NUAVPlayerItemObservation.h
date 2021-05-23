/*
 Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

#import <NSObject.h>

@class AVPlayerItem;

@interface _NUAVPlayerItemObservation : NSObject

{
    _Bool _registeredKVO;
    AVPlayerItem *_playerItem;
}

@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (nonatomic) _Bool registeredKVO;

@end
