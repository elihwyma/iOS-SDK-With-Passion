/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface MPCReportingMescalSetupCompletionEvent : NSObject

{
    NSError *_error;
    double _setupDuration;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic) double setupDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isValidReportingEvent;
- (unsigned long long)reportingEventType;

@end
