/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoLoadingStateObserving, SVVideoSkipThreshold;

@interface SVVideoSkipThresholdObserver : NSObject

{
    _Bool _loading;
    CDUnknownBlockType block;
    id <SVVideoSkipThreshold> _thresholdProvider;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
}

@property (nonatomic, readonly) id <SVVideoLoadingStateObserving> loadingStateObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <SVVideoSkipThreshold> thresholdProvider;
@property (nonatomic, readonly) _Bool loading;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType block;

- (void)loadingCompletedWithThreshold:(double)arg1;
- (id)initWithLoadingStateObserver:(id)arg1 thresholdProvider:(id)arg2;

@end
