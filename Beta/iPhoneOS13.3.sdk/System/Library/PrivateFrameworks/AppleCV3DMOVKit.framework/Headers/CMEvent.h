/*
 Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface CMEvent : NSObject

{
    unsigned long long _eventType;
    double _timestamp;
    NSString *_peerDisplayName;
    NSUUID *_uuid;
}

@property unsigned long long eventType;
@property double timestamp;
@property (retain, nonatomic) NSString *peerDisplayName;
@property (retain, nonatomic) NSUUID *uuid;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
