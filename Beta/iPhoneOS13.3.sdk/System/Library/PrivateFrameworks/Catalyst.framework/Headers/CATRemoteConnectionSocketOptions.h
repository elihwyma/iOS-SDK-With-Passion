/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface CATRemoteConnectionSocketOptions : NSObject

{
    NSNumber *_adaptiveWriteTimeout;
    NSNumber *_keepAliveEnabled;
    NSNumber *_keepAliveDelay;
    NSNumber *_keepAliveInterval;
    NSNumber *_keepAliveCount;
    NSNumber *_netServiceType;
}

@property (copy, nonatomic) NSNumber *adaptiveWriteTimeout;
@property (copy, nonatomic) NSNumber *keepAliveEnabled;
@property (copy, nonatomic) NSNumber *keepAliveDelay;
@property (copy, nonatomic) NSNumber *keepAliveInterval;
@property (copy, nonatomic) NSNumber *keepAliveCount;
@property (copy, nonatomic) NSNumber *netServiceType;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
