/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSString, PRPeer, PRRelativePosition;

@interface ARProximityData : NSObject <Swift>

{
    double _timestamp;
    double _timestampLocalSync;
    double _timestampGlobalSync;
    PRRelativePosition *_measurement;
    PRPeer *_peer;
    unsigned long long _vioSessionID;
}

@property (nonatomic) double timestamp;
@property (nonatomic) double timestampLocalSync;
@property (nonatomic) double timestampGlobalSync;
@property (nonatomic, readonly) PRRelativePosition *measurement;
@property (nonatomic, readonly) PRPeer *peer;
@property (nonatomic, readonly) unsigned long long vioSessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithMeasurement:(id)arg1 peer:(id)arg2 vioSessionID:(unsigned long long)arg3;

@end
