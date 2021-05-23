/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface MNTimeballLocationRequest : NSObject

{
    double _desiredAccuracy;
    unsigned long long _attemptCount;
    unsigned long long _maxAttempts;
    NSDate *_requestDate;
    double _timeoutInterval;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic) double desiredAccuracy;
@property (nonatomic) unsigned long long attemptCount;
@property (nonatomic) unsigned long long maxAttempts;
@property (retain, nonatomic) NSDate *requestDate;
@property (nonatomic) double timeoutInterval;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;

+ (id)requestWithAccuracy:(double)arg1 maxAttempts:(unsigned long long)arg2 timeoutInterval:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;

- (id)init;

@end
