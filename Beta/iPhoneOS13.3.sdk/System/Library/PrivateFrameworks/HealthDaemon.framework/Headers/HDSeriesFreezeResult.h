/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface HDSeriesFreezeResult : NSObject

{
    long long _status;
    NSUUID *_frozenIdentifier;
}

@property (nonatomic, readonly) long long status;
@property (copy, nonatomic, readonly) NSUUID *frozenIdentifier;

- (id)initWithStatus:(long long)arg1 frozenIdentifier:(id)arg2;

@end
