/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@class AVPlayerItem, AVSynchronizedLayer;

@interface PMAVSynchronizedView : UIView

@property (retain, nonatomic) AVSynchronizedLayer *layer;
@property (retain, nonatomic) AVPlayerItem *playerItem;

+ (Class)layerClass;

- (id)makeBackingLayer;

@end
