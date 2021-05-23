/*
 Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ATXNowPlayingEvent : NSObject

{
    NSString *_bundleId;
    long long _nowPlayingState;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) long long nowPlayingState;

- (_Bool)isTVExperienceAppNowPlaying;
- (id)initWithContextInfo:(id)arg1;

@end
