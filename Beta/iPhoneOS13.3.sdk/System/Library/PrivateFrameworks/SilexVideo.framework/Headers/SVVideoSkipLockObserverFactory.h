/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVTimeline;

@protocol SVVideoSkipThresholdObserverFactory;

@interface SVVideoSkipLockObserverFactory : NSObject

{
    SVTimeline *_timeline;
    id <SVVideoSkipThresholdObserverFactory> _thresholdObserverFactory;
}

@property (nonatomic, readonly) SVTimeline *timeline;
@property (nonatomic, readonly) id <SVVideoSkipThresholdObserverFactory> thresholdObserverFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createSkipLockObserverForVideo:(id)arg1;
- (id)initWithTimeline:(id)arg1 thresholdObserverFactory:(id)arg2;

@end
