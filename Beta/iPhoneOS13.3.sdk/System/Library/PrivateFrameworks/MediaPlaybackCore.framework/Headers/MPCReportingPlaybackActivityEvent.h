/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSString, SSVPlayActivityEvent;

@interface MPCReportingPlaybackActivityEvent : NSObject

{
    _Bool _shouldReportToStore;
    SSVPlayActivityEvent *_playActivityEvent;
}

@property (copy, nonatomic) SSVPlayActivityEvent *playActivityEvent;
@property (nonatomic) _Bool shouldReportToStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isValidReportingEvent;
- (unsigned long long)reportingEventType;

@end
