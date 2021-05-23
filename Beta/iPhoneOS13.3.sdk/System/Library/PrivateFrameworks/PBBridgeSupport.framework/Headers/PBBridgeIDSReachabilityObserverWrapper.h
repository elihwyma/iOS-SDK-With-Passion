/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <Foundation/NSObject.h>

@protocol PBBridgeIDSReachabilityObserver;

@interface PBBridgeIDSReachabilityObserverWrapper : NSObject

{
    id <PBBridgeIDSReachabilityObserver> _observer;
}

@property (weak, nonatomic) id <PBBridgeIDSReachabilityObserver> observer;

- (void)fireReachability:(id)arg1 deviceStatus:(id)arg2 devices:(id)arg3;

@end
