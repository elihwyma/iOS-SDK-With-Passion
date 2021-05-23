/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoQueueProviding, SVVideoVisiblePercentageManager, SVVisibilityReporting;

@interface SVVideoSkipHandler : NSObject

{
    id <SVVideoQueueProviding> _queueProvider;
    id <SVVisibilityReporting> _visiblityReporter;
    id <SVVideoVisiblePercentageManager> _visiblePercentageManager;
}

@property (nonatomic, readonly) id <SVVideoQueueProviding> queueProvider;
@property (nonatomic, readonly) id <SVVisibilityReporting> visiblityReporter;
@property (nonatomic, readonly) id <SVVideoVisiblePercentageManager> visiblePercentageManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)skipToVideo:(id)arg1 animated:(_Bool)arg2;
- (id)initWithQueueProvider:(id)arg1 visibiltyReporter:(id)arg2 visiblePercentageManager:(id)arg3;

@end
