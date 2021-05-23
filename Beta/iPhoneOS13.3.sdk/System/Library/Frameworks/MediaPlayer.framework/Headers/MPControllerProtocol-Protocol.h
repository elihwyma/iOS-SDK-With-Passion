/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class MPAVController, MPAVItem, UIView;

@protocol MPControllerProtocol <Swift>

@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) MPAVItem *item;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) MPAVController *player;
@property (retain, nonatomic, readonly) UIView *view;

- (unsigned short)clearWeakReferencesToObject: /* Error: Ran out of types for this method. */;
- (unsigned short)noteIgnoredChangeTypes: /* Error: Ran out of types for this method. */;
- (unsigned short)setOrientation:animate: /* Error: Ran out of types for this method. */;

@end
