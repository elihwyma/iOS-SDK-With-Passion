/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol MPRemoteCommandDelegate_Internal, MPRemoteCommandDelegate_Private, OS_dispatch_queue;

@interface MPRemoteCommand : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_handlers;
    _Bool _enabled;
    _Bool _observing;
    unsigned int _mediaRemoteCommandType;
    id <MPRemoteCommandDelegate_Internal> _commandCenterDelegate;
    id <MPRemoteCommandDelegate_Private> _delegate;
}

@property (weak, nonatomic) id <MPRemoteCommandDelegate_Internal> commandCenterDelegate;
@property (nonatomic, getter=isObserving) _Bool observing;
@property (nonatomic, readonly) _Bool hasTargets;
@property (nonatomic, readonly, getter=isSupported) _Bool supported;
@property (nonatomic, readonly, getter=isSupportedAndEnabled) _Bool supportedAndEnabled;
@property (nonatomic, readonly) unsigned int mediaRemoteCommandType;
@property (weak, nonatomic) id <MPRemoteCommandDelegate_Private> delegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (id)description;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)addTargetWithHandler:(CDUnknownBlockType)arg1;
- (void)removeTarget:(id)arg1;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (_Bool)isSupportedForContentItemIdentifier:(id)arg1;
- (_Bool)isEnabledForContentItemIdentifier:(id)arg1;
- (void)invokeCommandWithEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct _MRMediaRemoteCommandInfo *)createCommandInfoRepresentation;
- (void)notifyPropagatablePropertyChanged;
- (id)newCommandEvent;
- (id)newCommandEventWithContentItemIdentifier:(id)arg1;
- (id)newCommandEventWithPlaybackQueueOffset:(long long)arg1;
- (id)newCommandEventWithCommandType:(unsigned int)arg1 options:(id)arg2;
- (id)newSeekCommandEventWithType:(unsigned long long)arg1;
- (id)_mediaRemoteCommandInfoOptions;

@end
