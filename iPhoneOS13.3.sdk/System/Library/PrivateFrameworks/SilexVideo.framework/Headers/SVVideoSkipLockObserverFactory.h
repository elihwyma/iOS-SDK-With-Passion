//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoSkipLockObserverFactory-Protocol.h>

@class SVTimeline;
@protocol SVVideoSkipThresholdObserverFactory;

@interface SVVideoSkipLockObserverFactory : NSObject <SVVideoSkipLockObserverFactory>
{
    SVTimeline *_timeline;
    id <SVVideoSkipThresholdObserverFactory> _thresholdObserverFactory;
}

@property(readonly, nonatomic) id <SVVideoSkipThresholdObserverFactory> thresholdObserverFactory; // @synthesize thresholdObserverFactory=_thresholdObserverFactory;
@property(readonly, nonatomic) SVTimeline *timeline; // @synthesize timeline=_timeline;
// - (void).cxx_destruct;
- (id)createSkipLockObserverForVideo:(id)arg1;
- (id)initWithTimeline:(id)arg1 thresholdObserverFactory:(id)arg2;

@end

