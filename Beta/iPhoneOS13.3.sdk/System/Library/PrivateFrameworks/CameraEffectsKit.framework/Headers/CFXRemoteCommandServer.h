/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSDistributedNotificationCenter;

@protocol CFXRemoteCommandServerDelegate;

@interface CFXRemoteCommandServer : NSObject

{
    id <CFXRemoteCommandServerDelegate> _delegate;
    NSDistributedNotificationCenter *_distributedNotificationCenter;
}

@property (weak, nonatomic) id <CFXRemoteCommandServerDelegate> delegate;
@property (retain, nonatomic) NSDistributedNotificationCenter *distributedNotificationCenter;

- (id)initWithDelegate:(id)arg1;
- (void)onAddShapeNotification:(id)arg1;
- (void)onAddStickerNotification:(id)arg1;
- (void)onAddTextNotification:(id)arg1;
- (void)onRemoveEffectsNotification:(id)arg1;
- (void)onSetAnimojiNotification:(id)arg1;
- (void)onSetFilterNotification:(id)arg1;

@end
