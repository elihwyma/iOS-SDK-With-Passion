/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingHybridFeature : NSObject

{
    _Bool _active;
    _Bool _autoRemove;
    _Bool _skippable;
    double _startTime;
    double _duration;
    unsigned long long _activationType;
    id _userInfo;
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=shouldAutoRemove) _Bool autoRemove;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic, getter=isSkippable) _Bool skippable;
@property (nonatomic) unsigned long long activationType;
@property (retain, nonatomic) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 startTime:(double)arg2 duration:(double)arg3;

@end
