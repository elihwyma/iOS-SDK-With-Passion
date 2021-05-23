/*
 Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, NSUUID;

@interface CVAUserEvent : NSObject

{
    unsigned long long _eventType;
    double _timestamp;
    NSUUID *_uuid;
    NSString *_peerDisplayName;
    NSNumber *_sessionID;
    NSNumber *_movLowestTimestamp;
}

@property unsigned long long eventType;
@property double timestamp;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *peerDisplayName;
@property (retain, nonatomic) NSNumber *sessionID;
@property (retain, nonatomic) NSNumber *movLowestTimestamp;

+ (_Bool)supportsSecureCoding;
+ (id)classes;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(unsigned long long)arg1 timestamp:(double)arg2;

@end
