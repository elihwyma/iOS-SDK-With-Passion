/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VUIPlaybackReporterVPAFPlaylistItem : NSObject

{
    unsigned long long _overallPosition;
    NSArray *_eventData;
    unsigned long long _duration;
    struct _NSRange _timeRange;
}

@property (nonatomic) unsigned long long overallPosition;
@property (retain, nonatomic) NSArray *eventData;
@property (nonatomic) struct _NSRange timeRange;
@property (nonatomic) unsigned long long duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long startOverallPosition;
@property (nonatomic, readonly) long long startPosition;

- (id)initWithPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 eventData:(id)arg3;

@end
