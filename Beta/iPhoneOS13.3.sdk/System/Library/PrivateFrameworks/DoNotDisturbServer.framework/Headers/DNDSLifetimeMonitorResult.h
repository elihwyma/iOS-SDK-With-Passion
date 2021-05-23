/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface DNDSLifetimeMonitorResult : NSObject

{
    NSArray *_activeUUIDs;
    NSArray *_expiredUUIDs;
}

@property (copy, nonatomic, readonly) NSArray *activeUUIDs;
@property (copy, nonatomic, readonly) NSArray *expiredUUIDs;

- (id)initWithActiveUUIDs:(id)arg1 expiredUUIDs:(id)arg2;

@end
