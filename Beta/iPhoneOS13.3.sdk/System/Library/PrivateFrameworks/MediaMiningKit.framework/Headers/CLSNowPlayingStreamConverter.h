/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@interface CLSNowPlayingStreamConverter : NSObject

{
    unsigned long long _options;
}

@property (nonatomic) unsigned long long options;

+ (unsigned long long)defaultOptions;
+ (id)recognizedMusicSources;

- (id)init;
- (id)eventFromDuetKnoweledgeEvent:(id)arg1;
- (id)eventsFromDuetKnowledgeEvents:(id)arg1;
- (_Bool)_canUseEvent:(id)arg1;

@end
