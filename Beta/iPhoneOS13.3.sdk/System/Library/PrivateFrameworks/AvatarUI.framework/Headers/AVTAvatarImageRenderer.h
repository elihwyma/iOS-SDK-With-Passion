/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTSnapshotBuilder;

@protocol AVTUILogger, OS_dispatch_queue;

@interface AVTAvatarImageRenderer : NSObject

{
    AVTSnapshotBuilder *_snapshotBuilder;
    id <AVTUILogger> _logger;
    NSObject<OS_dispatch_queue> *_snapshotBuilderQueue;
}

@property (retain, nonatomic) AVTSnapshotBuilder *snapshotBuilder;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *snapshotBuilderQueue;

- (id)initWithEnvironment:(id)arg1;
- (id)initWithSnapshotBuilder:(id)arg1 lockProvider:(CDUnknownBlockType)arg2 logger:(id)arg3;
- (id)nts_imageForAvatar:(id)arg1 scope:(id)arg2;
- (id)imageForAvatar:(id)arg1 scope:(id)arg2;

@end
