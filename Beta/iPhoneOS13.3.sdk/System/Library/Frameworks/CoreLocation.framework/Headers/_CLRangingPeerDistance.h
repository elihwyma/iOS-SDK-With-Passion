/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, _CLRangingPeer;

@interface _CLRangingPeerDistance : NSObject

{
    id _internal;
    _Bool _initiator;
}

@property (copy, nonatomic, readonly) _CLRangingPeer *peer;
@property (copy, nonatomic, readonly) NSDate *timestamp;
@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) NSNumber *distanceMeters;
@property (copy, nonatomic, readonly) NSNumber *accuracyMeters;
@property (nonatomic, readonly, getter=isInitiator) _Bool initiator;
@property (nonatomic, readonly) _Bool shouldUnlock;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(_Bool)arg5 shouldUnlock:(_Bool)arg6;
- (id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(_Bool)arg5;
- (id)initWithPeer:(id)arg1 timestamp:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(_Bool)arg5;
- (_Bool)initiator;

@end
