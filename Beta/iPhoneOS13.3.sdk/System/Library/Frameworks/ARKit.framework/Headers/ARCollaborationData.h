/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSSet, NSUUID, PRCollaborationData, PRPeer;

@interface ARCollaborationData : NSObject

{
    long long _priority;
    long long _version;
    double _timestamp;
    NSData *_vioData;
    long long _vioDataType;
    unsigned long long _vioSessionID;
    NSUUID *_anchorIdentifier;
    NSSet *_anchors;
    PRCollaborationData *_prCollaborationData;
    PRPeer *_prPeer;
}

@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) NSData *vioData;
@property (nonatomic, readonly) long long vioDataType;
@property (nonatomic, readonly) unsigned long long vioSessionID;
@property (retain, nonatomic) NSUUID *anchorIdentifier;
@property (retain, nonatomic) NSSet *anchors;
@property (retain, nonatomic) PRCollaborationData *prCollaborationData;
@property (retain, nonatomic) PRPeer *prPeer;
@property (nonatomic, readonly) long long priority;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVIOData:(id)arg1 type:(long long)arg2 sessionID:(unsigned long long)arg3;
- (id)initWithProximityCollaborationData:(id)arg1 sessionID:(unsigned long long)arg2;

@end
