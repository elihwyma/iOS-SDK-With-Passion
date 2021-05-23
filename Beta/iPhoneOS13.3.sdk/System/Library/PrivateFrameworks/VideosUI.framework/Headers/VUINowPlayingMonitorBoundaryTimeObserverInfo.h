/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface VUINowPlayingMonitorBoundaryTimeObserverInfo : NSObject

{
    _Bool _notifiedOfEntry;
    double _time;
    NSUUID *_token;
    CDUnknownBlockType _handler;
}

@property (nonatomic) double time;
@property (nonatomic) _Bool notifiedOfEntry;
@property (retain, nonatomic) NSUUID *token;
@property (copy, nonatomic) CDUnknownBlockType handler;

@end
