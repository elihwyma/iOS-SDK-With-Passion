/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface PBBridgeIDSReachabilityStatusObject : NSObject

{
    NSUUID *_idsDeviceID;
    unsigned long long _reachability;
}

@property (retain, nonatomic) NSUUID *idsDeviceID;
@property (nonatomic) unsigned long long reachability;

+ (id)connectivityString:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
