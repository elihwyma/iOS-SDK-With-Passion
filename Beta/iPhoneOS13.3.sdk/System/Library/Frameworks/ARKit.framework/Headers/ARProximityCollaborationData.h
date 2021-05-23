/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSString, PRCollaborationData, PRPeer;

@interface ARProximityCollaborationData : NSObject <Swift>

{
    double timestamp;
    PRCollaborationData *_collaborationData;
    PRPeer *_peer;
}

@property (nonatomic, readonly) PRCollaborationData *collaborationData;
@property (nonatomic, readonly) PRPeer *peer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double timestamp;

- (id)initWithPRCollaborationData:(id)arg1 peer:(id)arg2;

@end
