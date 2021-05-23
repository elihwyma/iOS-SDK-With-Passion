/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class ATSession, NSArray, NSDictionary, NSError, NSNumber, NSString;

@interface ATSessionTask : NSObject

{
    _Bool _finished;
    _Bool _running;
    _Bool _cancelled;
    NSString *_sessionTaskIdentifier;
    NSString *_sessionGroupingKey;
    NSString *_localizedDescription;
    double _progress;
    unsigned long long _totalItemCount;
    unsigned long long _completedItemCount;
    NSNumber *_totalBytesToTransfer;
    NSNumber *_totalBytesTransferred;
    NSArray *_currentItemDescriptions;
    NSArray *_currentItems;
    NSDictionary *_properties;
    NSError *_error;
    ATSession *_session;
    double _startTime;
    double _finishTime;
}

@property (getter=isRunning) _Bool running;
@property (getter=isFinished) _Bool finished;
@property (getter=isCancelled) _Bool cancelled;
@property (weak) ATSession *session;
@property (copy) NSString *sessionTaskIdentifier;
@property (copy) NSString *localizedDescription;
@property (copy) NSString *sessionGroupingKey;
@property double progress;
@property unsigned long long totalItemCount;
@property unsigned long long completedItemCount;
@property (copy) NSError *error;
@property (copy) NSArray *currentItemDescriptions;
@property (copy) NSArray *currentItems;
@property (copy) NSDictionary *properties;
@property (copy) NSNumber *totalBytesToTransfer;
@property (copy) NSNumber *totalBytesTransferred;
@property double startTime;
@property double finishTime;
@property (readonly) double duration;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)cancel;
- (void)start;
- (void)_start;
- (id)baseClassRepresentation;

@end
