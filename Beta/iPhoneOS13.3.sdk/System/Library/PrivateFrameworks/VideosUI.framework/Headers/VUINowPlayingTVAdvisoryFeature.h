/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUINowPlayingTimeBoundFeature.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingTVAdvisoryFeature : VUINowPlayingTimeBoundFeature

{
    NSArray *_advisoryDisabledTimeRanges;
}

@property (copy, nonatomic) NSArray *advisoryDisabledTimeRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=shouldAutoRemove) _Bool autoRemove;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic, getter=isSkippable) _Bool skippable;

- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 startTime:(double)arg2 duration:(double)arg3;

@end
