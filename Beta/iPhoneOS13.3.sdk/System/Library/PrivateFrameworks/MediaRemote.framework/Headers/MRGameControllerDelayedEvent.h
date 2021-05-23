/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MRGameControllerDelayedEvent : NSObject

{
    unsigned long long _lastDownEvent;
    CDUnknownBlockType _sendEventBlock;
}

@property (nonatomic) unsigned long long lastDownEvent;
@property (copy, nonatomic) CDUnknownBlockType sendEventBlock;

- (void)send;

@end
