/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@interface PUTimeInterval : NSObject

{
    long long _state;
    double _startTime;
    CDUnknownBlockType _intervalStartedHandler;
    CDUnknownBlockType _intervalEndedHandler;
    double _endTime;
}

@property (nonatomic) long long state;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic, readonly) double duration;
@property (copy, nonatomic) CDUnknownBlockType intervalStartedHandler;
@property (copy, nonatomic) CDUnknownBlockType intervalEndedHandler;

- (id)init;
- (void)startInterval;
- (void)startIntervalWithTimeOverride:(double)arg1;
- (void)endInterval;
- (void)_handleTransitionToRunning;
- (void)_handleTransitionToComplete;

@end
