/*
 Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSNumber, NSString, NSUUID, PRCollaborationData, PRPeer;

@interface CMMessage : NSObject

{
    _Bool _isSent;
    unsigned long long _messageType;
    double _timestamp;
    NSString *_fromPeerDisplayName;
    NSArray *_toPeerDisplays;
    long long _cmDataType;
    NSData *_cmData;
    NSData *_cmAdditionalData;
    NSNumber *_sessionID;
    NSNumber *_movLowestTimestamp;
    NSUUID *_uuid;
    PRPeer *_prPeer;
    PRCollaborationData *_prCollaborationData;
}

@property unsigned long long messageType;
@property double timestamp;
@property (retain, nonatomic) NSString *fromPeerDisplayName;
@property (retain, nonatomic) NSArray *toPeerDisplays;
@property long long cmDataType;
@property (retain, nonatomic) NSData *cmData;
@property (retain, nonatomic) NSData *cmAdditionalData;
@property (retain, nonatomic) NSNumber *sessionID;
@property (retain, nonatomic) NSNumber *movLowestTimestamp;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain) PRPeer *prPeer;
@property (retain) PRCollaborationData *prCollaborationData;
@property _Bool isSent;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageType:(unsigned long long)arg1;

@end
