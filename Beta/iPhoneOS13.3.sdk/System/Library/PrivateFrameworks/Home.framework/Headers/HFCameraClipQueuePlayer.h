/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <AVFoundation/AVQueuePlayer.h>

@class HFCameraClipPlayerItem, NSArray;

@interface HFCameraClipQueuePlayer : AVQueuePlayer

@property (nonatomic, readonly) HFCameraClipPlayerItem *currentItem;
@property (copy, nonatomic, readonly) NSArray *items;

- (id)initWithItems:(id)arg1;

@end
