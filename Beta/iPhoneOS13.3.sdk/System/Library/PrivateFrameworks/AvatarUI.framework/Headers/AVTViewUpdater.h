/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class AVTAvatar, AVTView, NSString;

@protocol AVTAvatarRecord, AVTUILogger, OS_dispatch_queue;

@interface AVTViewUpdater : NSObject <Swift>

{
    AVTView *_avtView;
    id <AVTAvatarRecord> _avatarRecord;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <AVTUILogger> _logger;
    CDUnknownBlockType _avatarUpdatedHandler;
    AVTAvatar *_currentAvatar;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (copy, nonatomic) CDUnknownBlockType avatarUpdatedHandler;
@property (retain, nonatomic) id <AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) AVTAvatar *currentAvatar;
@property (nonatomic, readonly) AVTView *avtView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithAVTView:(id)arg1 callbackQueue:(id)arg2 logger:(id)arg3;
- (void)setAvatarRecord:(id)arg1 avatar:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)avatarView:(id)arg1 didRenderAvatar:(id)arg2;
- (id)initWithAVTView:(id)arg1 logger:(id)arg2;
- (void)setAvatarRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
