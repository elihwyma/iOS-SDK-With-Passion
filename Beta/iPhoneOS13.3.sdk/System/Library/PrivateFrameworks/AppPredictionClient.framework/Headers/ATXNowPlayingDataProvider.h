/*
 Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

#import <Foundation/NSObject.h>

@class ATXCoreDuetContextHelper, ATXNowPlayingEvent;

@interface ATXNowPlayingDataProvider : NSObject

{
    ATXCoreDuetContextHelper *_coreDuetContextHelper;
    ATXNowPlayingEvent *_lastNowPlayingEvent;
}

- (id)init;
- (id)currentNowPlayingEvent;
- (_Bool)isTVExperienceAppNowPlaying;

@end
