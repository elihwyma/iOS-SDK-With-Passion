/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, _CLRangingPeer;

@interface _CLRangingPeerDistanceInternal : NSObject

{
    _CLRangingPeer *_peer;
    NSDate *_date;
    NSNumber *_distanceMeters;
    NSNumber *_accuracyMeters;
    _Bool _initiator;
    _Bool _shouldUnlock;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(_Bool)arg5 shouldUnlock:(_Bool)arg6;

@end
