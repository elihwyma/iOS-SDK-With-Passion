/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSError, NSNumber, NSString;

@interface ASDJobSchedulerJobMetadata : NSObject <Swift>

{
    NSNumber *_accountIdentifier;
    NSString *_bundleID;
    NSNumber *_externalPriority;
    NSNumber *_itemID;
    NSString *_jobState;
    NSString *_jobType;
    NSError *_lastError;
    NSNumber *_lastSoftFailureTimestamp;
    NSNumber *_priority;
    NSNumber *_priorityBucket;
    NSString *_skippedReason;
    long long _softFailureCount;
    NSNumber *_softFailureTimeout;
    NSNumber *_timestamp;
}

@property (copy) NSNumber *accountIdentifier;
@property (copy) NSString *bundleID;
@property (copy) NSNumber *externalPriority;
@property (copy) NSNumber *itemID;
@property (copy) NSString *jobState;
@property (copy) NSString *jobType;
@property (copy) NSError *lastError;
@property (copy) NSNumber *lastSoftFailureTimestamp;
@property (copy) NSNumber *priority;
@property (copy) NSNumber *priorityBucket;
@property (copy) NSString *skippedReason;
@property (nonatomic) long long softFailureCount;
@property (copy) NSNumber *softFailureTimeout;
@property (copy) NSNumber *timestamp;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
