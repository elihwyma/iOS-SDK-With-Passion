/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPAccessoryServerBTLE;

@interface HAPDiscoveredBTLEAccessoryServerTuple : HMFObject

{
    HAPAccessoryServerBTLE *_accessoryServer;
    double _lastSeen;
}

@property (nonatomic, readonly) HAPAccessoryServerBTLE *accessoryServer;
@property (nonatomic) double lastSeen;

+ (id)discoveredAccessoryServerTupleWithAccessoryServer:(id)arg1;

@end
