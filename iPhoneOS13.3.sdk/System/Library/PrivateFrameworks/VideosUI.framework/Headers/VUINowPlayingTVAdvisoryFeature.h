//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUINowPlayingTimeBoundFeature.h>

#import <VideosUI/VUINowPlayingTVAdvisoryFeature-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUINowPlayingTVAdvisoryFeature : VUINowPlayingTimeBoundFeature <VUINowPlayingTVAdvisoryFeature>
{
    NSArray *_advisoryDisabledTimeRanges;
}

@property(copy, nonatomic) NSArray *advisoryDisabledTimeRanges; // @synthesize advisoryDisabledTimeRanges=_advisoryDisabledTimeRanges;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(nonatomic, getter=isSkippable) BOOL skippable;
- (id)initWithType:(NSUInteger)arg1 startTime:(double)arg2 duration:(double)arg3;

@end

