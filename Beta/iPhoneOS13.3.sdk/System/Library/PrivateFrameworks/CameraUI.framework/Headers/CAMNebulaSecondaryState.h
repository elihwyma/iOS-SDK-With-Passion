/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface CAMNebulaSecondaryState : NSObject

{
    NSDate *_stopTime;
    long long _stopReasons;
    NSDate *_lastMovieWriteAttemptTime;
    long long _movieWriteAttemptsCount;
    long long _failedStateReadAttemptsCount;
}

@property (retain, nonatomic) NSDate *stopTime;
@property (nonatomic) long long stopReasons;
@property (nonatomic, readonly) NSDate *lastMovieWriteAttemptTime;
@property (nonatomic, readonly) long long movieWriteAttemptsCount;
@property (nonatomic) long long failedStateReadAttemptsCount;

+ (_Bool)supportsSecureCoding;
+ (id)secondaryStateWithContentsOfFile:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)writeToFile:(id)arg1;
- (_Bool)addStopReasons:(long long)arg1 stopTime:(id)arg2;
- (void)notifyWillAttemptToWriteMovie;

@end
