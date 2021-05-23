/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoAdProviding, SVVideoLoadingStateObserving;

@interface SVVideoAdActionAvailabilityObserver : NSObject

{
    _Bool _hasActionAvailable;
    CDUnknownBlockType _availabilityChangedBlock;
    id <SVVideoAdProviding> _videoAdProvider;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
}

@property (nonatomic, readonly) id <SVVideoAdProviding> videoAdProvider;
@property (nonatomic, readonly) id <SVVideoLoadingStateObserving> loadingStateObserver;
@property (nonatomic) _Bool hasActionAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onAvailabilityChanged:) CDUnknownBlockType availabilityChangedBlock;

- (id)initWithVideoAdProvider:(id)arg1 loadingStateObserver:(id)arg2;

@end
