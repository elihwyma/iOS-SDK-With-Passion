/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTMemoji, AVTSnapshotBuilder;

@protocol AVTUILogger, OS_dispatch_queue;

@interface AVTAvatarConfigurationImageRenderer : NSObject

{
    AVTMemoji *_avatar;
    AVTSnapshotBuilder *_snapshotBuilder;
    id <AVTUILogger> _logger;
    NSObject<OS_dispatch_queue> *_snapshotBuilderQueue;
}

@property (nonatomic, readonly) AVTMemoji *avatar;
@property (retain, nonatomic) AVTSnapshotBuilder *snapshotBuilder;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *snapshotBuilderQueue;

- (id)initWithEnvironment:(id)arg1;
- (id)imageForAvatarConfiguration:(id)arg1 scope:(id)arg2;
- (id)initWithLockProvider:(CDUnknownBlockType)arg1 logger:(id)arg2;
- (id)initWithSnapshotBuilder:(id)arg1 avatar:(id)arg2 lockProvider:(CDUnknownBlockType)arg3 logger:(id)arg4;
- (id)nts_imageForAvatarConfiguration:(id)arg1 scope:(id)arg2;

@end
