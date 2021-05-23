/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol MSBackoffManagerDelegate;

@interface MSBackoffManager : NSObject

{
    id <MSBackoffManagerDelegate> _delegate;
    double _initialInterval;
    double _backoffFactor;
    double _randomizeFactor;
    double _maxBackoffInterval;
    double _currentInterval;
    NSDate *_nextExpiryDate;
    NSDate *_retryAfterDate;
}

@property (nonatomic) id <MSBackoffManagerDelegate> delegate;
@property (nonatomic) double initialInterval;
@property (nonatomic) double backoffFactor;
@property (nonatomic) double randomizeFactor;
@property (nonatomic) double maxBackoffInterval;
@property (nonatomic) double currentInterval;
@property (retain) NSDate *nextExpiryDate;
@property (retain) NSDate *retryAfterDate;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (id)copyParameters;
- (void)backoff;
- (id)initWithInitialInterval:(double)arg1 backoffFactor:(double)arg2 randomizeFactor:(double)arg3 maxBackoffInterval:(double)arg4 retryAfterDate:(id)arg5;
- (void)didReceiveRetryAfterDate:(id)arg1;
- (void)_complainAboutMissingKeyInArchive:(id)arg1;

@end
