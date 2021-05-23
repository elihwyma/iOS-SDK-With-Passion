/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXDuetEvent.h>

@class NSString;

@interface ATXNowPlayingDuetEvent : ATXDuetEvent

{
    NSString *_bundleId;
    NSString *_track;
    long long _nowPlayingState;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *track;
@property (nonatomic, readonly) long long nowPlayingState;

- (id)description;
- (id)identifier;
- (id)initWithDKEvent:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithBundleId:(id)arg1 track:(id)arg2 nowPlayingState:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5;

@end
